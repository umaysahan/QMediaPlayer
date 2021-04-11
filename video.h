#ifndef VIDEO_H
#define VIDEO_H
#include "media.h"
#include<QMediaPlayer>
#include<QVideoWidget>


class video : public media
{
public:
    video();

    void play() override
     {
        qDebug() << "video played " << path;
        QMediaPlayer* player = new QMediaPlayer;
        QVideoWidget* vw = new QVideoWidget;
        player->setVideoOutput(vw);
        player->setMedia(QUrl::fromLocalFile("C:/images/mustafamuhammed.jpg"));
        vw->setGeometry(100,100,300,400);
        vw->show();
        player->play();
     }
  };

#endif // VIDEO_H

