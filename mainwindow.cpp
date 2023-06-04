#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QPixmap>
#include <QFileDialog>
#include <QFile>
#include <QDebug>
#include <playlist.h>
#include <QToolButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->tabWidget->clear();

}

//class Mytabwidget : public QTabWidget
//{
//    Q_OBJECT
//public:

//}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionOpen_triggered()
{
    QString file_path = QFileDialog::getOpenFileName(this, "Open a file", "/home/fiveeight/Music/Music/");
    setPlaylistString(file_path);


}

void MainWindow::setPlaylistString(const QString &value)
{
    Playlist* playlist = new Playlist(this);
    playlist->setPlaylistString(value);

}


void MainWindow::on_actionNew_Playlist_triggered()
{
    Playlist* playlist = new Playlist(this);
    ui->tabWidget->addTab(playlist, "New Playlist");

}

