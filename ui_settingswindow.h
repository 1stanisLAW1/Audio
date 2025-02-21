/********************************************************************************
** Form generated from reading UI file 'settingswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWINDOW_H
#define UI_SETTINGSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWindow
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *tab_2;

    void setupUi(QDialog *SettingsWindow)
    {
        if (SettingsWindow->objectName().isEmpty())
            SettingsWindow->setObjectName("SettingsWindow");
        SettingsWindow->resize(302, 298);
        tabWidget = new QTabWidget(SettingsWindow);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 301, 301));
        tab = new QWidget();
        tab->setObjectName("tab");
        tab->setEnabled(true);
        comboBox = new QComboBox(tab);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(20, 70, 82, 28));
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 40, 81, 21));
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 40, 81, 21));
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 40, 81, 21));
        comboBox_2 = new QComboBox(tab);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(110, 70, 82, 28));
        comboBox_3 = new QComboBox(tab);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(200, 70, 82, 28));
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 120, 71, 21));
        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(110, 120, 63, 20));
        label_6 = new QLabel(tab);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(200, 120, 63, 20));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());

        retranslateUi(SettingsWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsWindow);
    } // setupUi

    void retranslateUi(QDialog *SettingsWindow)
    {
        SettingsWindow->setWindowTitle(QCoreApplication::translate("SettingsWindow", "Dialog", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("SettingsWindow", "Black", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("SettingsWindow", "Red", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("SettingsWindow", "White", nullptr));

        label->setText(QCoreApplication::translate("SettingsWindow", "Background", nullptr));
        label_2->setText(QCoreApplication::translate("SettingsWindow", "Border", nullptr));
        label_3->setText(QCoreApplication::translate("SettingsWindow", "Text color", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("SettingsWindow", "Black", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("SettingsWindow", "Red", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("SettingsWindow", "White", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("SettingsWindow", "Black", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("SettingsWindow", "Red", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("SettingsWindow", "White", nullptr));

        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("SettingsWindow", "buttons", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("SettingsWindow", "Sliders", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsWindow: public Ui_SettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H
