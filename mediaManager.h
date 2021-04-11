#ifndef MEDIAMANAGER_H
#define MEDIAMANAGER_H
#include "media.h"
#include "audio.h"
#include "video.h"
#include "image.h"
class MediaManager
{
public:
    // singleton pattern
    static MediaManager& instance()
    {
        static MediaManager manager;
        return manager;
    }

    media* CreateMedia(QString path)
    {
        media* m=nullptr;
        if(path.endsWith(".mp3"))
        {
            m = new audio();

        }
        else if(path.endsWith(".avi"))
        {
            m = new video();

        }

        if(m != nullptr)
        {
            m->setString(path);
        }
        return m;
    }
private:
    MediaManager(){};
    ~MediaManager(){};

};


#endif // MEDIAMANAGER_H
