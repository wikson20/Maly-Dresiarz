#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpSocket>
#include "player.h"

class Client: public QObject
{
    Q_OBJECT

    public:
        //Konstruktor
        Client(QObject *parent = nullptr);

        //Łączenie z serwerem przy użyciu podanego hosta i portu
        void connectToServer(const QString &host, quint16 port);

        //Wysyłanie wiadomości do serwera
        void sendMessage(const QString &message);

        //Flaga wskazująca czy klient posiada token
        bool hasToken {false};

        //Ustawienie referencji do listy graczy
        void SetPlayerListReference(std::vector<Player*> *p);

    signals:
        //Sygnał do aktualizacji interfejsu użytkownika
        void updateUISignal();

        //Sygnał wskazujący rozpoczęcie nowej rundy
        void newRoundSignal();

        //Sygnał dla akcji Ivana
        void ivanAction();

        //Sygnał do wyświetlenia ostatecznego wyniku
        void showFinalResult(std::string result);

    private slots:
        //Slot obsługujący dane
        void onReadyRead();

    private:
        QTcpSocket *socket;
        std::vector<Player*> *players;

};

#endif // CLIENT_H
