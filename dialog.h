#ifndef DIALOG_H
#define DIALOG_H

#include "ui_mainwindow.h"
#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::Dialog *uit;
    Ui::MainWindow *ui;
};

#endif // DIALOG_H
