#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , uit(new Ui::Dialog)
{
    uit->setupUi(this);
}

Dialog::~Dialog()
{
    delete uit;
}

void Dialog::on_comboBox_currentIndexChanged(int index)
{
}

