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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
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
    QLabel *label;
    QWidget *widget;
    QLabel *nameL;
    QLabel *label_2;
    QSlider *lenSlid;
    QLabel *trek;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *curTime;
    QLabel *time;
    QPushButton *pushButton_3;
    QLabel *trek2;
    QComboBox *comboBox;
    QPushButton *stop;
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *back;
    QPushButton *play;
    QPushButton *Next;
    QPushButton *mute;
    QPushButton *random;
    QSlider *volumeSlid;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(465, 217);
        MainWindow->setMinimumSize(QSize(465, 217));
        MainWindow->setMaximumSize(QSize(465, 217));
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
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 60, 41, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 471, 201));
        widget->setMinimumSize(QSize(471, 201));
        widget->setMaximumSize(QSize(471, 201));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: rgb(0, 0, 0);\n"
"}"));
        nameL = new QLabel(widget);
        nameL->setObjectName("nameL");
        nameL->setGeometry(QRect(20, 0, 401, 31));
        QFont font1;
        font1.setPointSize(12);
        nameL->setFont(font1);
        nameL->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        nameL->setTextFormat(Qt::TextFormat::AutoText);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(280, 60, 41, 31));
        label_2->setFont(font);
        lenSlid = new QSlider(widget);
        lenSlid->setObjectName("lenSlid");
        lenSlid->setGeometry(QRect(10, 40, 451, 20));
        lenSlid->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal\n"
"{\n"
"height:10px;\n"
"width:420;\n"
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
        trek = new QLabel(widget);
        trek->setObjectName("trek");
        trek->setGeometry(QRect(360, 60, 41, 31));
        QFont font2;
        font2.setPointSize(18);
        trek->setFont(font2);
        trek->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        trek->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        trek->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 70, 16, 16));
        label_6->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(400, 60, 20, 31));
        QFont font3;
        font3.setPointSize(21);
        label_7->setFont(font3);
        label_7->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_7->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        curTime = new QLabel(widget);
        curTime->setObjectName("curTime");
        curTime->setGeometry(QRect(10, 70, 31, 16));
        curTime->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        time = new QLabel(widget);
        time->setObjectName("time");
        time->setGeometry(QRect(50, 70, 49, 16));
        time->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(320, 60, 29, 29));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"background-color:rgb(0, 0, 0);\n"
"border: 2px solid rgb(255, 255, 255);\n"
"solid: rgb(255, 255, 255);\n"
"border-radius:14px;\n"
"max-height:25px;\n"
"max-width:25px;\n"
"min-height:25px;\n"
"min-width:25px;\n"
"}"));
        trek2 = new QLabel(widget);
        trek2->setObjectName("trek2");
        trek2->setGeometry(QRect(420, 60, 41, 31));
        trek2->setFont(font2);
        trek2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        comboBox = new QComboBox(widget);
        comboBox->addItem(QString::fromUtf8(""));
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(100, 150, 351, 28));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: black;\n"
"    color: white;\n"
"    border: 1px solid white ;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border: 1px solid white;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: black; \n"
"    selection-background-color:white;\n"
"    selection-color:white;\n"
"color: white;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    width: 20px; \n"
"}"));
        stop = new QPushButton(widget);
        stop->setObjectName("stop");
        stop->setGeometry(QRect(10, 150, 84, 34));
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
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(430, 10, 14, 14));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton { background-color: black; color:rgb(255, 128, 0); border: 2px solid white;solid: white;\n"
"                       border-radius:5px;\n"
"                       max-height:10px;\n"
"                       max-width:10px;\n"
"                       min-height:10px;\n"
"                       min-width:10px;\n"
"}"));
        horizontalLayoutWidget_2 = new QWidget(widget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(10, 100, 450, 36));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        back = new QPushButton(horizontalLayoutWidget_2);
        back->setObjectName("back");
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

        horizontalLayout_2->addWidget(back);

        play = new QPushButton(horizontalLayoutWidget_2);
        play->setObjectName("play");
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

        horizontalLayout_2->addWidget(play);

        Next = new QPushButton(horizontalLayoutWidget_2);
        Next->setObjectName("Next");
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

        horizontalLayout_2->addWidget(Next);

        mute = new QPushButton(horizontalLayoutWidget_2);
        mute->setObjectName("mute");
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

        horizontalLayout_2->addWidget(mute);

        random = new QPushButton(horizontalLayoutWidget_2);
        random->setObjectName("random");
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

        horizontalLayout_2->addWidget(random);

        volumeSlid = new QSlider(widget);
        volumeSlid->setObjectName("volumeSlid");
        volumeSlid->setGeometry(QRect(90, 70, 191, 21));
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
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 465, 22));
        QFont font4;
        font4.setPointSize(10);
        menubar->setFont(font4);
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        actionmusic->setText(QCoreApplication::translate("MainWindow", "music", nullptr));
        label->setText(QString());
        nameL->setText(QCoreApplication::translate("MainWindow", "NAME", nullptr));
        label_2->setText(QString());
        trek->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", " /", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", " /", nullptr));
        curTime->setText(QCoreApplication::translate("MainWindow", "00:00 ", nullptr));
        time->setText(QCoreApplication::translate("MainWindow", " 00:00", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        trek2->setText(QCoreApplication::translate("MainWindow", " 0", nullptr));

        stop->setText(QCoreApplication::translate("MainWindow", "replay", nullptr));
        pushButton_2->setText(QString());
        back->setText(QCoreApplication::translate("MainWindow", "back", nullptr));
        play->setText(QCoreApplication::translate("MainWindow", "pause", nullptr));
        Next->setText(QCoreApplication::translate("MainWindow", "next", nullptr));
        mute->setText(QCoreApplication::translate("MainWindow", "mute", nullptr));
        random->setText(QCoreApplication::translate("MainWindow", "mix", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
