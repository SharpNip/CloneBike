#include "Theme.h"


Theme::Theme()
{
	Start();
}


Theme::~Theme()
{
}
void Theme::Start()
{
	AudioSys->PlayMusic(Musics->Get(Music::ID::Theme));
}
void Theme::Update()
{
}
void Theme::Stop()
{
	AudioSys->StopMusic();
}
