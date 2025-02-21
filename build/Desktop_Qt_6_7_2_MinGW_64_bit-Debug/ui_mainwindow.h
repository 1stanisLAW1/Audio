/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionmusic;
    QWidget *centralwidget;
    QPushButton *play;
    QPushButton *stop;
    QPushButton *Next;
    QPushButton *back;
    QPushButton *mute;
    QSlider *volumeSlid;
    QLabel *label;
    QLabel *nameL;
    QSlider *lenSlid;
    QLabel *curTime;
    QLabel *time;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *trek;
    QLabel *trek2;
    QPushButton *random;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(386, 213);
        MainWindow->setWindowTitle(QString::fromUtf8("Music"));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));
        actionmusic = new QAction(MainWindow);
        actionmusic->setObjectName("actionmusic");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::EditFind));
        actionmusic->setIcon(icon);
        actionmusic->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        play = new QPushButton(centralwidget);
        play->setObjectName("play");
        play->setGeometry(QRect(100, 100, 84, 34));
        play->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 0, 0);\n"
"border: 2px solid rgb(255, 255, 255);\n"
"solid: rgb(255, 255, 255);\n"
"border-radius:15px;\n"
"max-height:30px;\n"
"max-width:80px;\n"
"min-height:30px;\n"
"min-width:80px;\n"
"}"));
        stop = new QPushButton(centralwidget);
        stop->setObjectName("stop");
        stop->setGeometry(QRect(280, 100, 84, 34));
        stop->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 0, 0);\n"
"border: 2px solid rgb(255, 255, 255);\n"
"solid: rgb(255, 255, 255);\n"
"border-radius:15px;\n"
"max-height:30px;\n"
"max-width:80px;\n"
"min-height:30px;\n"
"min-width:80px;\n"
"}"));
        Next = new QPushButton(centralwidget);
        Next->setObjectName("Next");
        Next->setGeometry(QRect(190, 100, 84, 34));
        Next->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 0, 0);\n"
"border: 2px solid rgb(255, 255, 255);\n"
"solid: rgb(255, 255, 255);\n"
"border-radius:15px;\n"
"max-height:30px;\n"
"max-width:80px;\n"
"min-height:30px;\n"
"min-width:80px;\n"
"}"));
        back = new QPushButton(centralwidget);
        back->setObjectName("back");
        back->setGeometry(QRect(10, 100, 84, 34));
        back->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 0, 0);\n"
"border: 2px solid rgb(255, 255, 255);\n"
"solid: rgb(255, 255, 255);\n"
"border-radius:15px;\n"
"max-height:30px;\n"
"max-width:80px;\n"
"min-height:30px;\n"
"min-width:80px;\n"
"}"));
        mute = new QPushButton(centralwidget);
        mute->setObjectName("mute");
        mute->setGeometry(QRect(10, 140, 84, 34));
        mute->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 0, 0);\n"
"border: 2px solid rgb(255, 255, 255);\n"
"solid: rgb(255, 255, 255);\n"
"border-radius:15px;\n"
"max-height:30px;\n"
"max-width:80px;\n"
"min-height:30px;\n"
"min-width:80px;\n"
"}"));
        volumeSlid = new QSlider(centralwidget);
        volumeSlid->setObjectName("volumeSlid");
        volumeSlid->setGeometry(QRect(90, 150, 191, 21));
        volumeSlid->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal\n"
"{\n"
"height:10px;\n"
"width:170;\n"
"background:rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"}\n"
"QSlider::handle:horizontal\n"
"{\n"
"height:20px;\n"
"width:20;\n"
"background:rgb(255, 128, 0);\n"
"border-radius:10px;\n"
"margin:-7px -7px;\n"
"}"));
        volumeSlid->setOrientation(Qt::Orientation::Horizontal);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 140, 41, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        nameL = new QLabel(centralwidget);
        nameL->setObjectName("nameL");
        nameL->setGeometry(QRect(20, 10, 341, 20));
        nameL->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        lenSlid = new QSlider(centralwidget);
        lenSlid->setObjectName("lenSlid");
        lenSlid->setGeometry(QRect(10, 40, 361, 20));
        lenSlid->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal\n"
"{\n"
"height:10px;\n"
"width:340;\n"
"background:rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"}\n"
"QSlider::handle:horizontal\n"
"{\n"
"height:20px;\n"
"width:20;\n"
"background:rgb(255, 128, 0);\n"
"border-radius:10px;\n"
"margin:-7px -7px;\n"
"}"));
        lenSlid->setOrientation(Qt::Orientation::Horizontal);
        curTime = new QLabel(centralwidget);
        curTime->setObjectName("curTime");
        curTime->setGeometry(QRect(20, 70, 31, 16));
        curTime->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        time = new QLabel(centralwidget);
        time->setObjectName("time");
        time->setGeometry(QRect(60, 70, 49, 16));
        time->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 70, 16, 16));
        label_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(300, 40, 20, 71));
        QFont font1;
        font1.setPointSize(21);
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        trek = new QLabel(centralwidget);
        trek->setObjectName("trek");
        trek->setGeometry(QRect(280, 60, 31, 31));
        QFont font2;
        font2.setPointSize(18);
        trek->setFont(font2);
        trek->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        trek->setAlignment(Qt::AlignmentFlag::AlignCenter);
        trek2 = new QLabel(centralwidget);
        trek2->setObjectName("trek2");
        trek2->setGeometry(QRect(320, 60, 49, 31));
        trek2->setFont(font2);
        trek2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        random = new QPushButton(centralwidget);
        random->setObjectName("random");
        random->setGeometry(QRect(190, 60, 84, 34));
        random->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 0, 0);\n"
"border: 2px solid rgb(255, 255, 255);\n"
"solid: rgb(255, 255, 255);\n"
"border-radius:15px;\n"
"max-height:30px;\n"
"max-width:80px;\n"
"min-height:30px;\n"
"min-width:80px;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 386, 25));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        actionmusic->setText(QCoreApplication::translate("MainWindow", "music", nullptr));
        play->setText(QCoreApplication::translate("MainWindow", "pause", nullptr));
        stop->setText(QCoreApplication::translate("MainWindow", "replay", nullptr));
        Next->setText(QCoreApplication::translate("MainWindow", "next", nullptr));
        back->setText(QCoreApplication::translate("MainWindow", "back", nullptr));
        mute->setText(QCoreApplication::translate("MainWindow", "Off sound", nullptr));
        label->setText(QString());
        nameL->setText(QCoreApplication::translate("MainWindow", "NAME", nullptr));
        curTime->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        time->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        trek->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        trek2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        random->setText(QCoreApplication::translate("MainWindow", "random", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
