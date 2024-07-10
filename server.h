#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QList>

class Server : public QTcpServer
{
    Q_OBJECT

public:
    //Konstruktor
    Server(QObject *parent = nullptr);

    //Metoda uruchamiająca serwer
    void startServer();

signals:
    void ConnectionToHub(std::string result);

protected:
    //Obsługiwanie przychodzących połączeń
    void incomingConnection(qintptr socketDescriptor) override;

private slots:
    //Slot obsługujący dane
    void onReadyRead();

    //Slot obsługujący odłączenie klienta
    void onClientDisconnected();

private:
    //Lista połączonych klientów
    QList<QTcpSocket *> clients;
    int currentClientTour = 0;
    int tourCounter = 0;
    int roundsToPlay = 10;
    int reportedWinners = 0;
    int reportedWinnerScore = 0;
    QString reportedWinner {"None"};

    void PassToken();
    void NextPlayer();
    void EndGame();
};

#endif // SERVER_H
