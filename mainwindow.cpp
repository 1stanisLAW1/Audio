#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>
#include <QDebug>
#include <QFileDialog>
#include <QAudioOutput>
#include <QMediaPlayer>
#include <QRandomGenerator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),currentTrackIndex(-1)
{
    ui->setupUi(this);

    MPlayer = new QMediaPlayer(this);
    ao = new QAudioOutput(this);

    MPlayer->setAudioOutput(ao);

    QMenu *file = menuBar()->addMenu("File");
    QAction *action = new QAction("Open file", this);
    file->addAction(action);
    file->setStyleSheet(
        "QMenu { background-color: black; color: white; }"
        "QMenu::item:selected { background-color: #1e1e1e; color: rgb(255, 128, 0);}");
    ui->menubar->setStyleSheet("QMenuBar { background-color: black; color: white; }"
                               "QMenuBar::item:selected { background-color: #1e1e1e; color: rgb(255, 128, 0); }");

    connect(action, &QAction::triggered, this, &MainWindow::pathFile);
    connect(MPlayer, &QMediaPlayer::mediaStatusChanged, this, &MainWindow::onMediaStatusChanged);
    connect(MPlayer,&QMediaPlayer::durationChanged,this,&MainWindow::durationChanged);
    connect(MPlayer,&QMediaPlayer::positionChanged,this,&MainWindow::positionChanged);
    //connect(MPlayer,&QMediaPlayer::positionChanged,this,&::MainWindow::on_lenSlid_sliderMoved);

    ui->volumeSlid->setValue(14);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete MPlayer;
}

void MainWindow::pathFile()
{
    QString directoryPath = QFileDialog::getExistingDirectory(this, tr("Select Directory"), "", QFileDialog::ShowDirsOnly);
    if (directoryPath.isEmpty()) {
        return;
    }

    QDir dir(directoryPath);
    QStringList filters;
    filters << "*.mp3";
    dir.setNameFilters(filters);

    QStringList mp3Files = dir.entryList(QDir::Files);
    mass.clear();

    for (const QString &file : mp3Files) {
        QString fullPath = dir.absoluteFilePath(file);
        mass.append(fullPath);
    }

    QString filePath = QFileDialog::getOpenFileName(this, tr("Select Audio File"), directoryPath, tr("Audio Files (*.mp3 *.wav *.ogg)"));
    QFileInfo fileInfo(filePath);
    ui->nameL->setText(fileInfo.fileName());
    lenTreck();
    if (!filePath.isEmpty()) {

        if (QFile::exists(filePath)) {
            MPlayer->setSource(QUrl::fromLocalFile(filePath));
            MPlayer->play();
            currentTrackIndex = mass.indexOf(filePath);
            currentTreck();
        }
    }
    initializeComboBox();
}

void MainWindow::on_play_clicked()
{
    updateTrackLabel();
    MPlayer->play();
    currentTreck();

    play = !play;
    if(play){
        updateTrackLabel();
        MPlayer->play();
        currentTreck();
        ui->play->setStyleSheet("QPushButton { background-color: black; color:white; border: 2px solid rgb(255, 255, 255);solid: rgb(255, 255, 255);"
                                "border-radius:15px;"
                                "max-height:30px;"
                                "max-width:80px;"
                                "min-height:30px;"
                                "min-width:80px;}");
        ui->play->setText("pause");

    }
    else{
        MPlayer->pause();
        ui->play->setStyleSheet("QPushButton { background-color: black; color:rgb(255, 128, 0); border: 2px solid rgb(255, 128, 0);solid: rgb(255, 128, 0);"
"border-radius:15px;"
"max-height:30px;"
"max-width:80px;"
"min-height:30px;"
"min-width:80px;}");
        ui->play->setText("pause");
    }
}



void MainWindow::on_stop_clicked()
{
    static bool repeatEnabled = false;

    repeatEnabled = !repeatEnabled;

    if (repeatEnabled) {
        MPlayer->setLoops(9999);
        ui->stop->setStyleSheet("QPushButton { background-color: black;color:rgb(255, 128, 0); border: 2px solid rgb(255, 128, 0);solid: rgb(255, 128, 0);"
                                "border-radius:15px;"
                                "max-height:30px;"
                                "max-width:80px;"
                                "min-height:30px;"
                                "min-width:80px;}");
        ui->stop->setText("replay");
    } else {
        MPlayer->setLoops(1);
        ui->stop->setStyleSheet("QPushButton { background-color: black; color:white; border: 2px solid rgb(255, 255, 255);solid: rgb(255, 255, 255);"
                                "border-radius:15px;"
                                "max-height:30px;"
                                "max-width:80px;"
                                "min-height:30px;"
                                "min-width:80px;}");
        ui->stop->setText("replay");
    }
}

void MainWindow::on_Next_clicked()
{
    try {
        if(play==true){
            if(ran==false){
                if (currentTrackIndex+1 < mass.size()) {
                    currentTrackIndex++;
                    MPlayer->setSource(QUrl::fromLocalFile(mass[currentTrackIndex]));
                    updateTrackLabel();
                    currentTreck();
                    MPlayer->play();

                } else {
                    currentTrackIndex = 0;
                    MPlayer->setSource(QUrl::fromLocalFile(mass[currentTrackIndex]));
                    updateTrackLabel();
                    currentTreck();
                    MPlayer->play();
                }
            }else{
                if (currentTrackIndex+1 < mass.size()) {
                    rand();
                    MPlayer->setSource(QUrl::fromLocalFile(mass[currentTrackIndex]));
                    updateTrackLabel();
                    currentTreck();
                    MPlayer->play();

                } else {
                    currentTrackIndex = 0;
                    MPlayer->setSource(QUrl::fromLocalFile(mass[currentTrackIndex]));
                    updateTrackLabel();
                    currentTreck();
                    MPlayer->play();
                }
            }
        }else{
            if(ran==false){
                if (currentTrackIndex+1 < mass.size()) {
                    currentTrackIndex++;
                    MPlayer->setSource(QUrl::fromLocalFile(mass[currentTrackIndex]));
                    updateTrackLabel();
                    currentTreck();
                } else {
                    currentTrackIndex = 0;
                    MPlayer->setSource(QUrl::fromLocalFile(mass[currentTrackIndex]));
                    updateTrackLabel();
                    currentTreck();
                }
            }else{
                if (currentTrackIndex+1 < mass.size()) {
                    rand();
                    MPlayer->setSource(QUrl::fromLocalFile(mass[currentTrackIndex]));
                    updateTrackLabel();
                    currentTreck();
                } else {
                    currentTrackIndex = 0;
                    MPlayer->setSource(QUrl::fromLocalFile(mass[currentTrackIndex]));
                    updateTrackLabel();
                    currentTreck();
                }
            }
        }
    } catch (std::exception e) {
        qDebug()<<e.what();
    }
}


void MainWindow::on_back_clicked()
{
    try {
        if(play==true){
        if (currentTrackIndex > 0) {
            currentTrackIndex--;
            MPlayer->setSource(QUrl::fromLocalFile(mass[currentTrackIndex]));
            updateTrackLabel();
            currentTreck();
            MPlayer->play();
        } else {
            MPlayer->setSource(QUrl::fromLocalFile(mass[0]));
            currentTreck();
            updateTrackLabel();
            MPlayer->play();
        }
        }else{
            if (currentTrackIndex > 0) {
                currentTrackIndex--;
                MPlayer->setSource(QUrl::fromLocalFile(mass[currentTrackIndex]));
                updateTrackLabel();
                currentTreck();
            } else {
                MPlayer->setSource(QUrl::fromLocalFile(mass[0]));
                currentTreck();
                updateTrackLabel();
            }
        }
    } catch (std::exception e) {
        qDebug()<<e.what();
    }
}

void MainWindow::onMediaStatusChanged(QMediaPlayer::MediaStatus status)
{
    if (status == QMediaPlayer::EndOfMedia) {
        if(ran==false){
            if (currentTrackIndex+1 < mass.size()) {
                currentTrackIndex++;
                MPlayer->setSource(QUrl::fromLocalFile(mass[currentTrackIndex]));
                updateTrackLabel();
                currentTreck();
                MPlayer->play();
            } else {
                currentTrackIndex = 0;
                MPlayer->setSource(QUrl::fromLocalFile(mass[currentTrackIndex]));
                updateTrackLabel();
                currentTreck();
                MPlayer->play();
            }
        }
        else{
            rand();
            if (currentTrackIndex < mass.size()) {
                MPlayer->setSource(QUrl::fromLocalFile(mass[currentTrackIndex]));
                updateTrackLabel();
                currentTreck();
                MPlayer->play();
            } else {
                currentTrackIndex = 0;
                MPlayer->setSource(QUrl::fromLocalFile(mass[currentTrackIndex]));
                updateTrackLabel();
                currentTreck();
                MPlayer->play();
            }
        }
    }
}

void MainWindow::on_volumeSlid_valueChanged(int value)
{
    ui->volumeSlid->setMinimum(0);
    ui->volumeSlid->setMaximum(100);
    float scal = ui->volumeSlid->value()/100.0f;
    ao->setVolume(scal);
    if (value < 0) {
        value = 0;
    } else if (value > 100) {
        value = 100;
    }
    ui->volumeSlid->setValue(value);
    QString val = QString::number(value);
    ui->label->setText(val);
    if (value == 0) {
        ui->label->setStyleSheet("color: red;");
    } else {
        ui->label->setStyleSheet("color: white;");
    }
}

void MainWindow::UpdataDur(qint64 duration)
{
    QString timeStr;
    if (duration || Mduration) {
        QTime CurrentTime((duration / 3600) % 60, (duration / 60) % 60, duration % 60, (duration * 1000) % 1000);
        QTime totalTime((Mduration / 3600) % 60, (Mduration / 60) % 60, Mduration % 60, (Mduration * 1000) % 1000);
        QString format = "mm:ss";
        if (Mduration > 3600) {
            format = "hh:mm:ss";
        }
        ui->curTime->setText(CurrentTime.toString(format));
        ui->time->setText(totalTime.toString(format));
    }
}

void MainWindow::durationChanged(qint64 duration)
{
    Mduration = duration/1000;
    ui->lenSlid->setMaximum(Mduration);
}

void MainWindow::positionChanged(qint64 progress)
{
    if(!ui->lenSlid->isSliderDown()){
        ui->lenSlid->setValue(progress/1000);
    }
    UpdataDur(progress/1000);
}

void MainWindow::updateTrackLabel() {
    if (currentTrackIndex >= 0 && currentTrackIndex < mass.size()) {
        QString trackName = QFileInfo(mass[currentTrackIndex]).fileName();
        ui->nameL->setText(trackName);
    }
}


void MainWindow::on_mute_clicked()
{
    if(Is_Muted == false){
        ui->mute->setStyleSheet("QPushButton { background-color: black; color:rgb(255, 128, 0); border: 2px solid rgb(255, 128, 0);solid: rgb(255, 128, 0);"
                                "border-radius:15px;"
                                "max-height:30px;"
                                "max-width:80px;"
                                "min-height:30px;"
                                "min-width:80px;}");
        ui->mute->setText("mute");
        Is_Muted = true;
        ao->setMuted(true);
    }
    else{
        ui->mute->setStyleSheet("QPushButton { background-color: black; color:white; border: 2px solid rgb(255, 255, 255);solid: rgb(255, 255, 255);"
                                "border-radius:15px;"
                                "max-height:30px;"
                                "max-width:80px;"
                                "min-height:30px;"
                                "min-width:80px;}");
        ui->mute->setText("mute");
        Is_Muted = false;
        ao->setMuted(false);
    }
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
        if (event->key() == Qt::Key_P && event->modifiers() & Qt::ControlModifier) {on_play_clicked();}
        if (event->key() == Qt::Key_B && event->modifiers() & Qt::ControlModifier) {on_back_clicked();}
        if (event->key() == Qt::Key_M && event->modifiers() & Qt::ControlModifier) {on_mute_clicked();}
        if (event->key() == Qt::Key_N && event->modifiers() & Qt::ControlModifier) {on_Next_clicked();}
        if (event->key() == Qt::Key_R && event->modifiers() & Qt::ControlModifier) {on_stop_clicked();}
        if (event->key() == Qt::Key_F && event->modifiers() & Qt::ControlModifier) {pathFile();}
        if (event->key() == Qt::Key_H && event->modifiers() & Qt::ControlModifier) {on_pushButton_clicked();}
        if (event->key() == Qt::Key_E && event->modifiers() & Qt::ControlModifier) {on_random_clicked();}
}

void MainWindow::lenTreck()
{
    QString trackSize = QString::number(mass.size());
    ui->trek2->setText(trackSize);
}

void MainWindow::currentTreck()
{
    int currTreck = currentTrackIndex+1;
    QString s = QString::number(currTreck);
    ui->trek->setText(s);
}

void MainWindow::rand()
{
    quint32 value = QRandomGenerator::global()->bounded(0, mass.size());
    MPlayer->setSource(QUrl::fromLocalFile(mass[value]));
    MPlayer->play();
    currentTrackIndex = value;
    updateTrackLabel();
    currentTreck();
}




void MainWindow::on_random_clicked()
{
    static bool rndm = false;

    rndm = !rndm;
    if(rndm){
        ran = true;
        ui->random->setStyleSheet("QPushButton { background-color: black; color:rgb(255, 128, 0); border: 2px solid rgb(255, 128, 0);solid: rgb(255, 128, 0);"
                                  "border-radius:15px;"
                                  "max-height:30px;"
                                  "max-width:80px;"
                                  "min-height:30px;"
                                  "min-width:80px;}");
        ui->random->setText("mix");
    }
    else{
        ran = false;
        ui->random->setStyleSheet("QPushButton { background-color: black; color:white; border: 2px solid rgb(255, 255, 255);solid: rgb(255, 255, 255);"
                                  "border-radius:15px;"
                                  "max-height:30px;"
                                  "max-width:80px;"
                                  "min-height:30px;"
                                  "min-width:80px;}");
        ui->random->setText("mix");
    }
}


void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    if(index != 0){
        currentTrackIndex = index - 1;

        if (currentTrackIndex < 0 || currentTrackIndex >= mass.size()) {
            qDebug() << "Invalid track index:" << currentTrackIndex;
            return;
        }

        QString filePath = mass[currentTrackIndex];
        QFileInfo fileInfo(filePath);

        MPlayer->setSource(QUrl::fromLocalFile(fileInfo.absoluteFilePath()));

        ui->nameL->setText(fileInfo.fileName());
        ui->trek->setText(QString::number(currentTrackIndex + 1));

        MPlayer->play();
    }
    else{
        qDebug()<<"Empty";
    }

}

void MainWindow::initializeComboBox()
{
    for (const QString &filePath : mass) {
        QFileInfo fileInfo(filePath);
        ui->comboBox->addItem(fileInfo.fileName());
    }
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox msgB;
    msgB.setStyleSheet("QMessageBox { background-color: black; }"
                       "QLabel { color: white; }"  // Устанавливаем цвет текста для меток
                       "QPushButton { color: white; background-color: gray; }"  // Цвет текста и фона для кнопок
                       "QPushButton:hover { background-color: darkgray; }");
    msgB.setWindowTitle("Help");
    msgB.setTextFormat(Qt::RichText);
    msgB.setText("CTRL+P=Pause  CTRL+B=Back<br>CTRL+M=Mute  CTRL+N=Next<br>CTRL+R=Replay  CTRL+F=Open File<br>CTRL+H=Window Help  CTRL+E=Mix");
    msgB.exec();
}



void MainWindow::on_lenSlid_sliderMoved(int position)
{
    MPlayer->setPosition(position*1000);
}


