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
    , ui(new Ui::MainWindow),currentTrackIndex(-1),indx(-1)
{
    ui->setupUi(this);
    menu = new QMenu(this);
    msgBox = new QMessageBox(this);

    MPlayer = new QMediaPlayer(this);
    ao = new QAudioOutput(this);

    MPlayer->setAudioOutput(ao);
    addStyle();

    file = menuBar()->addMenu("File");
    QAction *action = new QAction("Open file", this);
    file->addAction(action);

    file->setStyleSheet(styleVector.at(2));
    ui->menubar->setStyleSheet(styleVector.at(3));

    loadTheme();

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
            //MPlayer->setSource(QUrl("http://www.mfiles.co.uk/mp3-downloads/gs-cd-track2.mp3"));
            if(play){
                MPlayer->play();
            }else{
                MPlayer->pause();
            }
            currentTrackIndex = mass.indexOf(filePath);
            m.append(currentTrackIndex);
            indx++;
            currentTreck();
        }
    }
    initializeComboBox();
}

void MainWindow::on_play_clicked()
{
    play = !play;

    if(currentTrackIndex<0){
        if(them == false){
            if(play){
                ui->play->setStyleSheet(styleVector.at(1));
                ui->play->setText("pause");

            }
            else{
                ui->play->setStyleSheet(styleVector.at(0));
                ui->play->setText("pause");
            }
        }else{
            if(play){
                ui->play->setStyleSheet(styleWhiteBtn.at(1));
                ui->play->setText("pause");

            }
            else{
                ui->play->setStyleSheet(styleWhiteBtn.at(0));
                ui->play->setText("pause");
            }
        }
    }else{
            updateTrackLabel();
            MPlayer->play();
            currentTreck();
            if(them == false){
                if(play){
                    updateTrackLabel();
                    MPlayer->play();
                    currentTreck();
                    ui->play->setStyleSheet(styleVector.at(1));
                    ui->play->setText("pause");

                }
                else{
                    MPlayer->pause();
                    ui->play->setStyleSheet(styleVector.at(0));
                    ui->play->setText("pause");
                }
            }else{
                if(play){
                    updateTrackLabel();
                    MPlayer->play();
                    currentTreck();
                    ui->play->setStyleSheet(styleWhiteBtn.at(1));
                    ui->play->setText("pause");

                }
                else{
                    MPlayer->pause();
                    ui->play->setStyleSheet(styleWhiteBtn.at(0));
                    ui->play->setText("pause");
                }
            }
    }
    qDebug()<<"------------------------------------"<<play<<"-------------------------------------------------------";
}



void MainWindow::on_stop_clicked()
{
    if(them){
        if (repeatEnabled == true) {
            MPlayer->setLoops(9999);
            ui->stop->setStyleSheet(styleWhiteBtn.at(0));
            repeatEnabled = false;
            ui->stop->setText("replay");
        } else {
            MPlayer->setLoops(1);
            ui->stop->setStyleSheet(styleWhiteBtn.at(1));
            repeatEnabled = true;
            ui->stop->setText("replay");
        }
    }else{
        if (repeatEnabled == true) {
            MPlayer->setLoops(9999);
            ui->stop->setStyleSheet(styleVector.at(0));
            repeatEnabled = false;
            ui->stop->setText("replay");
        } else {
            MPlayer->setLoops(1);
            ui->stop->setStyleSheet(styleVector.at(1));
            repeatEnabled = true;
            ui->stop->setText("replay");
        }
    }
}

void MainWindow::on_Next_clicked()
{
    try {
        if(play==true){
            if(ran==false){
                if (indx+1 < mass.size()) {
                    currentTrackIndex++;
                    m.append(currentTrackIndex);
                    indx++;
                    MPlayer->setSource(QUrl::fromLocalFile(mass[m.at(indx)]));
                    updateTrackLabel();
                    currentTreck();
                    MPlayer->play();

                } else {
                    currentTrackIndex = 0;
                    m.clear();
                    m.append(0);
                    MPlayer->setSource(QUrl::fromLocalFile(mass[m.at(indx)]));
                    updateTrackLabel();
                    currentTreck();
                    MPlayer->play();
                }
            }else{
                if (indx+1 < mass.size()) {
                    rand();
                    MPlayer->setSource(QUrl::fromLocalFile(mass[m.at(indx)]));
                    updateTrackLabel();
                    currentTreck();
                    MPlayer->play();

                } else {
                    currentTrackIndex = 0;
                    m.clear();
                    m.append(0);
                    MPlayer->setSource(QUrl::fromLocalFile(mass[m.at(indx)]));
                    updateTrackLabel();
                    currentTreck();
                    MPlayer->play();
                }
            }
        }else{
            if(ran==false){
                if (currentTrackIndex+1 < mass.size()) {
                    currentTrackIndex++;
                    m.append(currentTrackIndex);
                    indx++;
                    MPlayer->setSource(QUrl::fromLocalFile(mass[m.at(indx)]));
                    updateTrackLabel();
                    currentTreck();
                } else {
                    currentTrackIndex = 0;
                    m.clear();
                    m.append(0);
                    MPlayer->setSource(QUrl::fromLocalFile(mass[m.at(indx)]));
                    updateTrackLabel();
                    currentTreck();
                }
            }else{
                if (indx+1 < mass.size()) {
                    rand();
                    MPlayer->setSource(QUrl::fromLocalFile(mass[m.at(indx)]));
                    updateTrackLabel();
                    currentTreck();
                } else {
                    currentTrackIndex = 0;
                    m.clear();
                    m.append(0);
                    MPlayer->setSource(QUrl::fromLocalFile(mass[m.at(indx)]));
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
        if (indx > 0) {
            indx--;
            MPlayer->setSource(QUrl::fromLocalFile(mass[m.at(indx)]));
            updateTrackLabel();
            currentTreck();
            MPlayer->play();
        } else {
            MPlayer->setSource(QUrl::fromLocalFile(mass[m.at(indx)]));
            currentTreck();
            updateTrackLabel();
            MPlayer->play();
        }
        }else{
            if (indx > 0) {
                indx--;
                MPlayer->setSource(QUrl::fromLocalFile(mass[m.at(indx)]));
                updateTrackLabel();
                currentTreck();
            } else {
                MPlayer->setSource(QUrl::fromLocalFile(mass[m.at(indx)]));
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
            if (indx+1 < mass.size()) {
                currentTrackIndex++;
                m.append(currentTrackIndex);
                indx++;
                MPlayer->setSource(QUrl::fromLocalFile(mass[m.at(indx)]));
                updateTrackLabel();
                currentTreck();
                MPlayer->play();
            } else {
                m.clear();
                m.append(0);
                currentTrackIndex = 0;
                MPlayer->setSource(QUrl::fromLocalFile(mass[m.at(indx)]));
                updateTrackLabel();
                currentTreck();
                MPlayer->play();
            }
        }
        else{
            rand();
            if (indx+1 < mass.size()) {
                MPlayer->setSource(QUrl::fromLocalFile(mass[m.at(indx)]));
                updateTrackLabel();
                currentTreck();
                MPlayer->play();
            } else {
                currentTrackIndex = 0;
                m.clear();
                m.append(0);
                MPlayer->setSource(QUrl::fromLocalFile(mass[m.at(indx)]));
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
    ui->label_2->setText(val);
    if (value == 0) {
        ui->label_2->setStyleSheet("color: red;");
    } else {
        if(them){
            ui->label_2->setStyleSheet("color: black;");
        }else{
            ui->label_2->setStyleSheet("color: white;");
        }
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
        QString trackName = QFileInfo(mass[m.at(indx)]).fileName();
        ui->nameL->setText(trackName);
    }
}


void MainWindow::on_mute_clicked()
{
    if(them){
        if(Is_Muted == false){
            ui->mute->setStyleSheet(styleWhiteBtn.at(0));
            ui->mute->setText("mute");
            Is_Muted = true;
            ao->setMuted(true);
        }
        else{
            ui->mute->setStyleSheet(styleWhiteBtn.at(1));
            ui->mute->setText("mute");
            Is_Muted = false;
            ao->setMuted(false);
        }
    }else{
        if(Is_Muted == false){
            ui->mute->setStyleSheet(styleVector.at(0));
            ui->mute->setText("mute");
            Is_Muted = true;
            ao->setMuted(true);
        }
        else{
            ui->mute->setStyleSheet(styleVector.at(1));
            ui->mute->setText("mute");
            Is_Muted = false;
            ao->setMuted(false);
        }
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
        if (event->key() == Qt::Key_H && event->modifiers() & Qt::ControlModifier) {on_pushButton_3_clicked();}
        if (event->key() == Qt::Key_E && event->modifiers() & Qt::ControlModifier) {on_random_clicked();}
}

void MainWindow::lenTreck()
{
    QString trackSize = QString::number(mass.size());
    ui->trek2->setText(trackSize);
}

void MainWindow::currentTreck()
{
    int currTreck = m.at(indx)+1;
    QString s = QString::number(currTreck);
    ui->trek->setText(s);
}

void MainWindow::rand()
{
    quint32 value = QRandomGenerator::global()->bounded(0, mass.size());
    MPlayer->setSource(QUrl::fromLocalFile(mass[value]));
    MPlayer->play();
    currentTrackIndex = value;
    m.append(currentTrackIndex);
    indx++;
    updateTrackLabel();
    currentTreck();
}




void MainWindow::on_random_clicked()
{
    ran = !ran;
    if(them == true){
        if(ran){
            ran = true;
            ui->random->setStyleSheet(styleWhiteBtn.at(0));
            ui->random->setText("mix");
        }
        else{
            ran = false;
            ui->random->setStyleSheet(styleWhiteBtn.at(1));
            ui->random->setText("mix");
        }
    }else{
        if(ran){
            ran = true;
            ui->random->setStyleSheet(styleVector.at(0));
            ui->random->setText("mix");
        }
        else{
            ran = false;
            ui->random->setStyleSheet(styleVector.at(1));
            ui->random->setText("mix");
        }
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
        m.clear();
        indx= -1;
        m.append(currentTrackIndex);
        indx++;


        ui->nameL->setText(fileInfo.fileName());
        ui->trek->setText(QString::number(m.at(indx) + 1));
        if(play){
            MPlayer->play();
        }else{
            MPlayer->pause();
        }
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

void MainWindow::on_lenSlid_sliderMoved(int position)
{
    MPlayer->setPosition(position*1000);
}

void MainWindow::on_pushButton_2_clicked()
{
    them = !them;
    saveTheme();
    updateTheme();
    qDebug()<<them;
}

void MainWindow::addStyle()
{
    //Btn styleSheet for btn
    styleVector.append("QPushButton { background-color: black; color:rgb(255, 128, 0); border: 2px solid rgb(255, 128, 0);solid: rgb(255, 128, 0);"
                                  "border-radius:15px;"
                                  "max-height:30px;"
                                  "max-width:80px;"
                                  "min-height:30px;"
                                  "min-width:80px;}");
    styleVector.append("QPushButton { background-color: black; color:white; border: 2px solid rgb(255, 255, 255);solid: rgb(255, 255, 255);"
                       "border-radius:15px;"
                       "max-height:30px;"
                       "max-width:80px;"
                       "min-height:30px;"
                       "min-width:80px;}");
    //styleSheet for Menu
    styleVector.append("QMenu { background-color: black; color: white; }"
                       "QMenu::item:selected { background-color: #1e1e1e; color: rgb(255, 128, 0);}");
    styleVector.append("QMenuBar { background-color: black; color: white; }"
                       "QMenuBar::item:selected { background-color: #1e1e1e; color: rgb(255, 128, 0); }");

    //Btn styleSheet for btn Theme
    styleVector.append("QPushButton { background-color: white; color:rgb(255, 128, 0); border: 2px solid black;solid: black;"
                       "border-radius:5px;"
                       "max-height:10px;"
                       "max-width:10px;"
                       "min-height:10px;"
                       "min-width:10px;}");
    styleVector.append("QPushButton { background-color: black; color:rgb(255, 128, 0); border: 2px solid white;solid: white;"
                       "border-radius:5px;"
                       "max-height:10px;"
                       "max-width:10px;"
                       "min-height:10px;"
                       "min-width:10px;}");

    styleVector.append("QWidget { background-color: black; }");
    styleVector.append("QLabel{color:rgb(255, 255, 255);}");

    styleVector.append("QPushButton { background-color: black; color:white; border: 2px solid rgb(255, 255, 255);solid: rgb(255, 255, 255);"
                       "border-radius:14px;max-height:25px;max-width:25px;min-height:25px;min-width:25px;}");

    styleVector.append("QSlider::groove:horizontal{"
                         "height:10px;width:420;background:rgb(255, 255, 255);border-radius:5px;}"
                         "QSlider::handle:horizontal{"
                        "height:20px;width:20;background:rgb(255, 128, 0);border-radius:10px;margin:-7px -7px;}");
    styleVector.append("QSlider::groove:horizontal{"
                       "height:10px;width:170;background:rgb(255, 255, 255);border-radius:5px;}"
                       "QSlider::handle:horizontal{"
                       "height:20px;width:20;background:rgb(255, 128, 0);border-radius:10px;margin:-7px -7px;}");

    styleVector.append("QComboBox {background-color: black;color: white;border: 1px solid white ;border-radius: 5px;padding: 5px;}"
"QComboBox:hover {border: 1px solid white;}"
"QComboBox QAbstractItemView {background-color: black; selection-background-color:white;selection-color:white;color: white;}"
"QComboBox::drop-down {width: 20px; }");


    //styleSheet for Theme white
    styleWhiteBtn.append("QPushButton { background-color: rgb(220, 220, 220); color:rgb(255, 106, 37); border: 2px solid rgb(255, 106, 37);solid: rgb(255, 106, 37);"
                                  "border-radius:15px;"
                                  "max-height:30px;"
                                  "max-width:80px;"
                                  "min-height:30px;"
                         "min-width:80px;}");

    styleWhiteBtn.append("QPushButton { background-color: rgb(220, 220, 220); color:black; border: 2px solid black;solid: black;"
                         "border-radius:15px;"
                         "max-height:30px;"
                         "max-width:80px;"
                         "min-height:30px;"
                         "min-width:80px;}");

    styleWhiteBtn.append("QMenu { background-color: rgb(220, 220, 220); color: black; }"
                       "QMenu::item:selected { background-color: rgb(220, 220, 220); color: rgb(255, 106, 37);}");
    styleWhiteBtn.append("QMenuBar { background-color: rgb(220, 220, 220); color: black; }"
                       "QMenuBar::item:selected { background-color: rgb(220, 220, 220); color: rgb(255, 106, 37); }");


    styleWhiteBtn.append("QWidget { background-color: rgb(220, 220, 220); }");

    styleWhiteBtn.append("QLabel{color:black");

    styleWhiteBtn.append("QPushButton { background-color: rgb(220, 220, 220); color:black; border: 2px solid black;solid: black;"
                         "border-radius:14px;max-height:25px;max-width:25px;min-height:25px;min-width:25px;}");

    styleWhiteBtn.append("QSlider::groove:horizontal{"
                       "height:10px;width:420;background:darkGray;border-radius:5px;}"
                       "QSlider::handle:horizontal{"
                       "height:20px;width:20;background:rgb(255, 106, 37);border-radius:10px;margin:-7px -7px;}");

    styleWhiteBtn.append("QSlider::groove:horizontal{"
                         "height:10px;width:170;background: darkGray;border-radius:5px;}"
                         "QSlider::handle:horizontal{"
                         "height:20px;width:20;background:rgb(255, 106, 37);border-radius:10px;margin:-7px -7px;}");

    styleWhiteBtn.append("QComboBox {background-color: rgb(220, 220, 220);color: black;border: 1px solid black ;border-radius: 5px;padding: 5px;}"
                       "QComboBox:hover {border: 1px solid black;}"
                       "QComboBox QAbstractItemView {background-color: rgb(220, 220, 220); selection-background-color:black;selection-color:black;color: black;}"
                       "QComboBox::drop-down {width: 20px; }");
}

void MainWindow::updateTheme()
{
    if(them) {
        ui->widget->setStyleSheet(styleWhiteBtn.at(4));

        ui->play->setStyleSheet(play ? styleWhiteBtn.at(1) : styleWhiteBtn.at(0));
        ui->mute->setStyleSheet(styleWhiteBtn.at(Is_Muted ? 0 : 1));
        ui->stop->setStyleSheet(styleWhiteBtn.at(repeatEnabled ? 1 : 0));
        ui->random->setStyleSheet(styleWhiteBtn.at(ran ? 0 : 1));
        ui->Next->setStyleSheet(styleWhiteBtn.at(1));
        ui->back->setStyleSheet(styleWhiteBtn.at(1));
        ui->pushButton_3->setStyleSheet(styleWhiteBtn.at(6));
        ui->pushButton_2->setStyleSheet(styleWhiteBtn.at(6));

        ui->menubar->setStyleSheet(styleWhiteBtn.at(3));
        file->setStyleSheet(styleWhiteBtn.at(2));

        ui->nameL->setStyleSheet(styleWhiteBtn.at(5));
        ui->curTime->setStyleSheet(styleWhiteBtn.at(5));
        ui->label_6->setStyleSheet(styleWhiteBtn.at(5));
        ui->time->setStyleSheet(styleWhiteBtn.at(5));
        ui->trek->setStyleSheet(styleWhiteBtn.at(5));
        ui->label_7->setStyleSheet(styleWhiteBtn.at(5));
        ui->trek2->setStyleSheet(styleWhiteBtn.at(5));
        ui->label_2->setStyleSheet(styleWhiteBtn.at(5));

        ui->lenSlid->setStyleSheet(styleWhiteBtn.at(7));
        ui->volumeSlid->setStyleSheet(styleWhiteBtn.at(8));

        ui->comboBox->setStyleSheet(styleVector.at(9));
    } else {
        ui->widget->setStyleSheet(styleVector.at(6));

        ui->play->setStyleSheet(play ? styleVector.at(1) : styleVector.at(0));
        ui->mute->setStyleSheet(styleVector.at(Is_Muted ? 0 : 1));
        ui->stop->setStyleSheet(styleVector.at(repeatEnabled ? 1 : 0));
        ui->random->setStyleSheet(styleVector.at(ran ? 0 : 1));
        ui->Next->setStyleSheet(styleVector.at(1));
        ui->back->setStyleSheet(styleVector.at(1));
        ui->pushButton_3->setStyleSheet(styleVector.at(8));
        ui->pushButton_2->setStyleSheet(styleVector.at(8));

        ui->menubar->setStyleSheet(styleVector.at(3));
        file->setStyleSheet(styleVector.at(2));

        ui->nameL->setStyleSheet(styleVector.at(7));
        ui->curTime->setStyleSheet(styleVector.at(7));
        ui->label_6->setStyleSheet(styleVector.at(7));
        ui->time->setStyleSheet(styleVector.at(7));
        ui->trek->setStyleSheet(styleVector.at(7));
        ui->label_7->setStyleSheet(styleVector.at(7));
        ui->trek2->setStyleSheet(styleVector.at(7));
        ui->label_2->setStyleSheet(styleVector.at(7));

        ui->lenSlid->setStyleSheet(styleVector.at(9));
        ui->volumeSlid->setStyleSheet(styleVector.at(10));

        ui->comboBox->setStyleSheet(styleVector.at(11));
    }
}

void MainWindow::saveTheme()
{
    //QString executablePath = QCoreApplication::applicationDirPath();
    QString filePath = "C:/Users/Neofit/AudioP/z/them.txt";
    QFile file(filePath);

    if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream stream(&file);
        if(them == true){
            stream << "Light";
        }else{
            stream<<"Dark";
        }
        if(stream.status() != QTextStream::Ok){
            qDebug() << "Ошибка записи данных: " << filePath << stream.status();
            msgBox->setWindowTitle("Error!!!");
            msgBox->setText("Ошибка записи данных");
            msgBox->exec();
            file.close();
        }
        if(file.error() != QFile::NoError){
            msgBox->setWindowTitle("Error!!!");
            msgBox->setText("Ошибка закрытия файла");
            msgBox->exec();
        }
    }
    else {
        msgBox->setWindowTitle("Error!!!");
        msgBox->setText("Не удалось открыть файл для записи");
        msgBox->exec();
    }
}

void MainWindow::loadTheme()
{
    QString executablePath = QCoreApplication::applicationDirPath();
    QString filePath =executablePath + "/../z/them.txt";
    qDebug()<<filePath;

    QFile file(filePath);

    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream stream(&file);
        QString st = stream.readAll();
        if(st == "Light"){
            them = true;
            updateTheme();
        }else{
            them = false;
            updateTheme();
        }
        file.close();
    } else {
        msgBox->setWindowTitle("Error!!!");
        msgBox->setText("Не удалось открыть файл для записи");
        msgBox->exec();
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox msgB;
    if(them){
        msgB.setStyleSheet("QMessageBox { background-color: rgb(220, 220, 220); }"
                           "QLabel { color: black; }"
                           "QPushButton { color: black; background-color: gray; }"
                           "QPushButton:hover { background-color: darkgray; }");
        msgB.setWindowTitle("Help");
        msgB.setTextFormat(Qt::RichText);
        msgB.setText("CTRL+P=Pause  CTRL+B=Back<br>CTRL+M=Mute  CTRL+N=Next<br>CTRL+R=Replay  CTRL+F=Open File<br>CTRL+H=Window Help  CTRL+E=Mix");
        msgB.exec();
    }else{
        msgB.setStyleSheet("QMessageBox { background-color: black; }"
                           "QLabel { color: white; }"
                           "QPushButton { color: white; background-color: gray; }"
                           "QPushButton:hover { background-color: darkgray; }");
        msgB.setWindowTitle("Help");
        msgB.setTextFormat(Qt::RichText);
        msgB.setText("CTRL+P=Pause  CTRL+B=Back<br>CTRL+M=Mute  CTRL+N=Next<br>CTRL+R=Replay  CTRL+F=Open File<br>CTRL+H=Window Help  CTRL+E=Mix");
        msgB.exec();
    }
}

