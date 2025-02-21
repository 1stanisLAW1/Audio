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
    QSlider *volumeSlid;
    QLabel *label;
    QLabel *nameL;
    QSlider *lenSlid;
    QLabel *curTime;
    QLabel *time;
    QLabel *label_4;
    QComboBox *comboBox;
    QLabel *trek2;
    QLabel *label_5;
    QLabel *trek;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *back;
    QPushButton *play;
    QPushButton *Next;
    QPushButton *mute;
    QPushButton *random;
    QPushButton *stop;
    QPushButton *pushButton;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(465, 218);
        MainWindow->setMinimumSize(QSize(465, 218));
        MainWindow->setMaximumSize(QSize(465, 218));
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
        volumeSlid = new QSlider(centralwidget);
        volumeSlid->setObjectName("volumeSlid");
        volumeSlid->setGeometry(QRect(100, 70, 181, 21));
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
        label->setGeometry(QRect(290, 60, 41, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        nameL = new QLabel(centralwidget);
        nameL->setObjectName("nameL");
        nameL->setGeometry(QRect(20, 10, 471, 20));
        QFont font1;
        font1.setPointSize(12);
        nameL->setFont(font1);
        nameL->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        nameL->setTextFormat(Qt::TextFormat::AutoText);
        lenSlid = new QSlider(centralwidget);
        lenSlid->setObjectName("lenSlid");
        lenSlid->setGeometry(QRect(20, 40, 441, 20));
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
        comboBox = new QComboBox(centralwidget);
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
        trek2 = new QLabel(centralwidget);
        trek2->setObjectName("trek2");
        trek2->setGeometry(QRect(410, 60, 41, 31));
        QFont font2;
        font2.setPointSize(18);
        trek2->setFont(font2);
        trek2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(390, 40, 20, 71));
        QFont font3;
        font3.setPointSize(21);
        label_5->setFont(font3);
        label_5->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        trek = new QLabel(centralwidget);
        trek->setObjectName("trek");
        trek->setGeometry(QRect(360, 60, 41, 31));
        trek->setFont(font2);
        trek->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        trek->setAlignment(Qt::AlignmentFlag::AlignCenter);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 100, 450, 36));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        back = new QPushButton(horizontalLayoutWidget);
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

        horizontalLayout->addWidget(back);

        play = new QPushButton(horizontalLayoutWidget);
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

        horizontalLayout->addWidget(play);

        Next = new QPushButton(horizontalLayoutWidget);
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

        horizontalLayout->addWidget(Next);

        mute = new QPushButton(horizontalLayoutWidget);
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

        horizontalLayout->addWidget(mute);

        random = new QPushButton(horizontalLayoutWidget);
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

        horizontalLayout->addWidget(random);

        stop = new QPushButton(centralwidget);
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
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(330, 60, 29, 29));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        curTime->setText(QCoreApplication::translate("MainWindow", "00:00 ", nullptr));
        time->setText(QCoreApplication::translate("MainWindow", " 00:00", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", " /", nullptr));

        trek2->setText(QCoreApplication::translate("MainWindow", " 0", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", " /", nullptr));
        trek->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        back->setText(QCoreApplication::translate("MainWindow", "back", nullptr));
        play->setText(QCoreApplication::translate("MainWindow", "pause", nullptr));
        Next->setText(QCoreApplication::translate("MainWindow", "next", nullptr));
        mute->setText(QCoreApplication::translate("MainWindow", "mute", nullptr));
        random->setText(QCoreApplication::translate("MainWindow", "mix", nullptr));
        stop->setText(QCoreApplication::translate("MainWindow", "replay", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
