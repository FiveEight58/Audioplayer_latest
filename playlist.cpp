#include "playlist.h"
#include "ui_playlist.h"
#include <QTableWidget>
#include <QVBoxLayout>
#include <QDebug>

Playlist::Playlist(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Playlist)
{
    ui->setupUi(this);
    tableWidget->setRowCount(1);
    tableWidget->setColumnCount(3);
    tableWidget->setHorizontalHeaderLabels({"Index", "Title", "Album/Artist"});
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(tableWidget);
    setLayout(layout);
}

void Playlist::setPlaylistString(const QString& value)
{
    QTableWidgetItem* item = new QTableWidgetItem();
    tableWidget->setItem(1, 3, item);

}


Playlist::~Playlist()
{
    delete ui;
}
