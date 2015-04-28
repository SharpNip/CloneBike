#include "Theme.h"


Theme::Theme()
{
}


Theme::~Theme()
{
}
void Theme::Start()
{
	AudioSys->PlayMusic(Musics->Get(Music::ID::Theme));
}
void Theme::Stop()
{
	AudioSys->StopMusic();
}
