#include "StartScreen.h"


StartScreen::StartScreen()
	: Sprite(Texture::ID::Startscreen)
	, song(nullptr)
{
	this->SetPosition(0, 0);
	song = new Theme();
}


StartScreen::~StartScreen()
{
}
void StartScreen::Update()
{
	if (BUTTON_START)
	{
		Kill();
	}

}
void StartScreen::Kill()
{
	song->Stop();
	this->SetPosition(0, 900);
	Scorer *scorer = new Scorer();
	scorer->SetLaunch(true);
}