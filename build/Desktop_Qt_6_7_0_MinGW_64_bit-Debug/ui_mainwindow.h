/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *GameplayWidget;
    QLabel *PlayerLabel;
    QPushButton *LansButton;
    QPushButton *RobotaButton;
    QPushButton *HaraczButton;
    QPushButton *BMWButton;
    QPushButton *IvanButton;
    QLabel *SzacunLabel;
    QLabel *KasaLabel;
    QLabel *BMLabel;
    QLabel *HaraczLabel;
    QLabel *BMLabel_2;
    QLabel *HaraczLabel_2;
    QLabel *KasaLabel_2;
    QLabel *SzacunLabel_2;
    QWidget *GameResultWidget;
    QLabel *ResultLabel;
    QWidget *PlayerCreationWidget;
    QLineEdit *PlayerNameEdit;
    QCheckBox *isRobotCheckbox;
    QPushButton *addPlayerButton;
    QPushButton *endCreationButton;
    QLineEdit *ServerIP;
    QCheckBox *isHostCheckbox;
    QLabel *GameLabel;
    QWidget *PlayerWaitingForGame;
    QLabel *WaitingLabel;
    QPushButton *StartGameButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1024, 768);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        GameplayWidget = new QWidget(centralwidget);
        GameplayWidget->setObjectName("GameplayWidget");
        GameplayWidget->setGeometry(QRect(0, 0, 1024, 768));
        PlayerLabel = new QLabel(GameplayWidget);
        PlayerLabel->setObjectName("PlayerLabel");
        PlayerLabel->setGeometry(QRect(0, 0, 1024, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font.setPointSize(25);
        PlayerLabel->setFont(font);
        PlayerLabel->setAlignment(Qt::AlignCenter);
        LansButton = new QPushButton(GameplayWidget);
        LansButton->setObjectName("LansButton");
        LansButton->setGeometry(QRect(270, 190, 231, 101));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Comic Sans MS")});
        LansButton->setFont(font1);
        RobotaButton = new QPushButton(GameplayWidget);
        RobotaButton->setObjectName("RobotaButton");
        RobotaButton->setGeometry(QRect(510, 190, 231, 101));
        RobotaButton->setFont(font1);
        HaraczButton = new QPushButton(GameplayWidget);
        HaraczButton->setObjectName("HaraczButton");
        HaraczButton->setGeometry(QRect(270, 310, 231, 101));
        HaraczButton->setFont(font1);
        BMWButton = new QPushButton(GameplayWidget);
        BMWButton->setObjectName("BMWButton");
        BMWButton->setGeometry(QRect(510, 310, 231, 101));
        BMWButton->setFont(font1);
        IvanButton = new QPushButton(GameplayWidget);
        IvanButton->setObjectName("IvanButton");
        IvanButton->setGeometry(QRect(410, 450, 231, 101));
        IvanButton->setFont(font1);
        SzacunLabel = new QLabel(GameplayWidget);
        SzacunLabel->setObjectName("SzacunLabel");
        SzacunLabel->setGeometry(QRect(370, 90, 49, 16));
        SzacunLabel->setFont(font1);
        SzacunLabel->setAlignment(Qt::AlignCenter);
        KasaLabel = new QLabel(GameplayWidget);
        KasaLabel->setObjectName("KasaLabel");
        KasaLabel->setGeometry(QRect(440, 90, 49, 16));
        KasaLabel->setFont(font1);
        KasaLabel->setAlignment(Qt::AlignCenter);
        BMLabel = new QLabel(GameplayWidget);
        BMLabel->setObjectName("BMLabel");
        BMLabel->setGeometry(QRect(520, 90, 49, 16));
        BMLabel->setFont(font1);
        BMLabel->setAlignment(Qt::AlignCenter);
        HaraczLabel = new QLabel(GameplayWidget);
        HaraczLabel->setObjectName("HaraczLabel");
        HaraczLabel->setGeometry(QRect(600, 90, 49, 16));
        HaraczLabel->setFont(font1);
        HaraczLabel->setAlignment(Qt::AlignCenter);
        BMLabel_2 = new QLabel(GameplayWidget);
        BMLabel_2->setObjectName("BMLabel_2");
        BMLabel_2->setGeometry(QRect(520, 70, 49, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font2.setPointSize(11);
        BMLabel_2->setFont(font2);
        BMLabel_2->setAlignment(Qt::AlignCenter);
        HaraczLabel_2 = new QLabel(GameplayWidget);
        HaraczLabel_2->setObjectName("HaraczLabel_2");
        HaraczLabel_2->setGeometry(QRect(600, 70, 49, 16));
        HaraczLabel_2->setFont(font2);
        HaraczLabel_2->setAlignment(Qt::AlignCenter);
        KasaLabel_2 = new QLabel(GameplayWidget);
        KasaLabel_2->setObjectName("KasaLabel_2");
        KasaLabel_2->setGeometry(QRect(440, 70, 49, 16));
        KasaLabel_2->setFont(font2);
        KasaLabel_2->setAlignment(Qt::AlignCenter);
        SzacunLabel_2 = new QLabel(GameplayWidget);
        SzacunLabel_2->setObjectName("SzacunLabel_2");
        SzacunLabel_2->setGeometry(QRect(370, 70, 49, 16));
        SzacunLabel_2->setFont(font2);
        SzacunLabel_2->setAlignment(Qt::AlignCenter);
        GameResultWidget = new QWidget(centralwidget);
        GameResultWidget->setObjectName("GameResultWidget");
        GameResultWidget->setGeometry(QRect(0, 0, 1024, 768));
        ResultLabel = new QLabel(GameResultWidget);
        ResultLabel->setObjectName("ResultLabel");
        ResultLabel->setGeometry(QRect(0, 240, 1021, 361));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font3.setPointSize(50);
        ResultLabel->setFont(font3);
        ResultLabel->setFrameShape(QFrame::NoFrame);
        ResultLabel->setAlignment(Qt::AlignCenter);
        PlayerCreationWidget = new QWidget(centralwidget);
        PlayerCreationWidget->setObjectName("PlayerCreationWidget");
        PlayerCreationWidget->setGeometry(QRect(10, 10, 1024, 768));
        PlayerNameEdit = new QLineEdit(PlayerCreationWidget);
        PlayerNameEdit->setObjectName("PlayerNameEdit");
        PlayerNameEdit->setGeometry(QRect(260, 180, 471, 61));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font4.setPointSize(24);
        PlayerNameEdit->setFont(font4);
        PlayerNameEdit->setMaxLength(32);
        PlayerNameEdit->setFrame(true);
        PlayerNameEdit->setAlignment(Qt::AlignCenter);
        isRobotCheckbox = new QCheckBox(PlayerCreationWidget);
        isRobotCheckbox->setObjectName("isRobotCheckbox");
        isRobotCheckbox->setGeometry(QRect(280, 260, 235, 31));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font5.setPointSize(18);
        isRobotCheckbox->setFont(font5);
        addPlayerButton = new QPushButton(PlayerCreationWidget);
        addPlayerButton->setObjectName("addPlayerButton");
        addPlayerButton->setGeometry(QRect(260, 340, 471, 61));
        addPlayerButton->setFont(font1);
        endCreationButton = new QPushButton(PlayerCreationWidget);
        endCreationButton->setObjectName("endCreationButton");
        endCreationButton->setGeometry(QRect(500, 440, 231, 61));
        endCreationButton->setFont(font1);
        ServerIP = new QLineEdit(PlayerCreationWidget);
        ServerIP->setObjectName("ServerIP");
        ServerIP->setGeometry(QRect(260, 440, 231, 61));
        ServerIP->setFont(font4);
        ServerIP->setMaxLength(32);
        ServerIP->setFrame(true);
        ServerIP->setAlignment(Qt::AlignCenter);
        isHostCheckbox = new QCheckBox(PlayerCreationWidget);
        isHostCheckbox->setObjectName("isHostCheckbox");
        isHostCheckbox->setGeometry(QRect(260, 501, 235, 41));
        isHostCheckbox->setFont(font5);
        GameLabel = new QLabel(PlayerCreationWidget);
        GameLabel->setObjectName("GameLabel");
        GameLabel->setGeometry(QRect(0, 0, 1024, 75));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font6.setPointSize(40);
        font6.setBold(true);
        GameLabel->setFont(font6);
        GameLabel->setAlignment(Qt::AlignCenter);
        PlayerWaitingForGame = new QWidget(centralwidget);
        PlayerWaitingForGame->setObjectName("PlayerWaitingForGame");
        PlayerWaitingForGame->setGeometry(QRect(10, 10, 1024, 768));
        WaitingLabel = new QLabel(PlayerWaitingForGame);
        WaitingLabel->setObjectName("WaitingLabel");
        WaitingLabel->setGeometry(QRect(10, 0, 991, 661));
        WaitingLabel->setFont(font3);
        WaitingLabel->setFrameShape(QFrame::NoFrame);
        WaitingLabel->setAlignment(Qt::AlignCenter);
        StartGameButton = new QPushButton(PlayerWaitingForGame);
        StartGameButton->setObjectName("StartGameButton");
        StartGameButton->setGeometry(QRect(390, 680, 231, 61));
        StartGameButton->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        PlayerLabel->setText(QCoreApplication::translate("MainWindow", "[PLAYER NAME]", nullptr));
        LansButton->setText(QCoreApplication::translate("MainWindow", "Lansuj si\304\231", nullptr));
        RobotaButton->setText(QCoreApplication::translate("MainWindow", "Do roboty!", nullptr));
        HaraczButton->setText(QCoreApplication::translate("MainWindow", "Napadnij na sklep", nullptr));
        BMWButton->setText(QCoreApplication::translate("MainWindow", "Ukradnij BMW", nullptr));
        IvanButton->setText(QCoreApplication::translate("MainWindow", "Dzwo\305\204 po Ivana", nullptr));
        SzacunLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        KasaLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        BMLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        HaraczLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        BMLabel_2->setText(QCoreApplication::translate("MainWindow", "Gara\305\274", nullptr));
        HaraczLabel_2->setText(QCoreApplication::translate("MainWindow", "Haracze", nullptr));
        KasaLabel_2->setText(QCoreApplication::translate("MainWindow", "Siano", nullptr));
        SzacunLabel_2->setText(QCoreApplication::translate("MainWindow", "Szacun", nullptr));
        ResultLabel->setText(QCoreApplication::translate("MainWindow", "[Result]", nullptr));
        PlayerNameEdit->setText(QCoreApplication::translate("MainWindow", "Nazwa gracza", nullptr));
        isRobotCheckbox->setText(QCoreApplication::translate("MainWindow", " Gracz SI", nullptr));
        addPlayerButton->setText(QCoreApplication::translate("MainWindow", "Dodaj gracza", nullptr));
        endCreationButton->setText(QCoreApplication::translate("MainWindow", "Graj!", nullptr));
        ServerIP->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        isHostCheckbox->setText(QCoreApplication::translate("MainWindow", "Host", nullptr));
        GameLabel->setText(QCoreApplication::translate("MainWindow", "Ma\305\202y dresiarz", nullptr));
        WaitingLabel->setText(QCoreApplication::translate("MainWindow", "[Result]", nullptr));
        StartGameButton->setText(QCoreApplication::translate("MainWindow", "Graj!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
