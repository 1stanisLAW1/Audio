#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qmenu.h"
#include <QMainWindow>
#include <QtMultimedia>
#include <QtCore>
#include <QWidget>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextToSpeech>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void durationChanged(qint64 duration);
    void positionChanged(qint64 progress);
    void pathFile();
    void on_play_clicked();

    void on_stop_clicked();

    void on_Next_clicked();

    void on_back_clicked();
    void onMediaStatusChanged(QMediaPlayer::MediaStatus status);

    void on_volumeSlid_valueChanged(int value);
    void updateTrackLabel();

    void on_mute_clicked();

    void keyPressEvent(QKeyEvent *event) override;
    void lenTreck();
    void currentTreck();
    void rand();

    void on_random_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void initializeComboBox();

    void on_lenSlid_sliderMoved(int position);
    void on_pushButton_2_clicked();
    void addStyle();
    void updateTheme();

    void saveTheme();
    void loadTheme();

    void on_pushButton_3_clicked();

    void on_comboBox_2_currentIndexChanged(int index);
    void updateDevice();

private:
    void UpdataDur(qint64 duration);
    Ui::MainWindow *ui;
    QMenu *menu;
    QAudioOutput *ao;
    QMediaPlayer *MPlayer;
    QVector<QString> mass;
    int currentTrackIndex;
    bool Is_Muted = false;
    bool ran = false;
    bool play = true;
    bool repeatEnabled = true;
    bool them = false;
    qint64 Mduration;
    QMessageBox* msgBox;
    QShortcut *keyCtrlD;
    QKeyEvent *event2;

    QVector<int>m;
    int indx;
    QVector<QString>styleVector;
    QVector<QString>styleWhiteBtn;

    QMenu *file;
    QTextToSpeech *speach;
};
#endif // MAINWINDOW_H
