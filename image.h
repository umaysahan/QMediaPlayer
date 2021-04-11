#ifndef IMAGE_H
#define IMAGE_H

#include "media.h"

class image : public media
{
public:
    image();
    void play() override
    {
        qDebug() << "image shown " << path;
    }
};

#endif // IMAGE_H
