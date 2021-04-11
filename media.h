#ifndef MEDIA_H
#define MEDIA_H
#include <QDebug>


class media{
protected:
    QString path;
public:
    media();
    void setString(QString a){
        path=a;
    }
    QString getString()
    {
        return path;
    }
    virtual void play()=0;
};

#endif // MEDIA_H
