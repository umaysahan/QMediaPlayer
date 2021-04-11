#ifndef AUDIO_H
#define AUDIO_H

#include "media.h"
#include<QMediaPlayer>
#include<QVideoWidget>

class audio : public media
{
 public:
        audio();
        void play() override
        {
            qDebug() << "audio played " << path;
            QMediaPlayer* player = new QMediaPlayer;
            QVideoWidget* vw = new QVideoWidget;
            player->setVideoOutput(vw);
            player->setMedia(QUrl::fromLocalFile("C:/audios/satisfya.mp3"));
            vw->setGeometry(100,100,300,400);
            vw->show();
            player->play();
        }
    };

#endif // AUDIO_H
