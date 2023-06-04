#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <QWidget>
#include <QTableWidget>

namespace Ui {
class Playlist;
}

class Playlist : public QWidget
{
    Q_OBJECT

public:
    explicit Playlist(QWidget *parent = nullptr);
    ~Playlist();
    void setPlaylistString(const QString& value);

private:
    QTableWidget* tableWidget;


private:
    Ui::Playlist *ui;
};

#endif // PLAYLIST_H
