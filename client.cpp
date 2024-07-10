#include "client.h"
#include <QCoreApplication>
#include <QTextStream>
#include <QTimer>

//Konstruktor
Client::Client(QObject *parent) : QObject(parent),socket(new QTcpSocket(this)) {
    connect(socket, &QTcpSocket::readyRead, this, &Client::onReadyRead);
}
//Ustawienie referencji do listy graczy
void Client::SetPlayerListReference(std::vector<Player*> *p = nullptr) {
    players = p;
}
//Łączenie z serwerem przy użyciu podanego hosta i portu
void Client::connectToServer(const QString &host, quint16 port) {
    socket->connectToHost(host, port);
}

//Wysyłanie wiadomości do serwera
void Client::sendMessage(const QString &message) {
    std::string s = message.toStdString() + ";";
    QString formatedMsg = QString::fromStdString(s);

    if(socket->state() == QAbstractSocket::ConnectedState) {
        socket->write(formatedMsg.toUtf8());
    }
}

//Slot obsługujący dane, gdy są gotowe do odczytu z serwera
void Client::onReadyRead() {
    QString data = QString::fromUtf8(socket->readAll());
    QStringList command =  data.split("|");

    qDebug() << "Received: " << data;

    if(command[0]=="setToken") {
        if(command[1]=="1") {
            hasToken = true;
        } else {
            hasToken = 0;
        }
        qDebug() << "Token updated! " << hasToken;

        if(command[2]=="1") {
            qDebug() << "To nowa runda!! " << hasToken;
            emit newRoundSignal();
        }
        emit updateUISignal();
    }
    else if(command[0]=="startMove") {
        qDebug() << "UPDATE UI!";
        emit updateUISignal();
    }
    else if(command[0]=="ivanAction") {
        qDebug() << "Ivan";
        emit ivanAction();
    }
    else if(command[0]=="getWinner") {
        qDebug() << "Raporting winner";

        if(players == nullptr) {
            qDebug() << "Nullptr at players!!!";
            return;
        }

        Player* winPlayer = players->at(0);
        for(int i = 0; i<players->size(); i++) {
            if(players->at(i)->szacun > winPlayer->szacun) {
                winPlayer = players->at(i);
            }
        }
        std::string message = "winner|"+winPlayer->playerName+"|"+std::to_string(winPlayer->szacun);
        sendMessage(QString::fromStdString(message));
    }
    else if(command[0]=="showWinner") {
        qDebug() << "yay, we have winner: " << command[1];
        emit showFinalResult(command[1].toStdString());
    }
}
