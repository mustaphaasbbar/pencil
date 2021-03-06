#ifndef SOUNDMANAGER_H
#define SOUNDMANAGER_H


#include "basemanager.h"
#include <memory>

class Layer;
class SoundClip;


class SoundManager : public BaseManager
{
    Q_OBJECT
public:

    SoundManager( QObject* parent );
    ~SoundManager();
    
    bool init() override;
    Status onObjectLoaded( Object* ) override;

    Status loadSound( Layer* soundLayer, int frameNumber, QString strSoundFile );

private:
    Status createMeidaPlayer( SoundClip* );
};

#endif // SOUNDMANAGER_H
