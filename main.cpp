#include "mainwindow.h"

#include <QApplication>
#include <QTimer>
#include "client.h"
#include "server.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
