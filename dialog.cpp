#include "dialog.h"

#include "ui_dialog.h"
#include <QMediaPlayer>
#include <QVideoWidget>
#include<QList>
#include<QDebug>
#include "mediaManager.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);



}

Dialog::~Dialog()
{
    delete ui;
}



void Dialog::on_playButton_clicked()
{


      auto media =  MediaManager::instance().CreateMedia("C:/videos/drop.avi");
        media->play();


}
