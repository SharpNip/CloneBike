#include "Background.h"
#include "HudOverlay.h"
#include "Motorist.h"
#include "StartScreen.h"
#include "Libraries.h"
#include "Obstalces.h"


int main(int argc, char* args[])
{
	// Get the engin instance
	Engine::GetInstance()->Init(800, 750);

	// Declaration of all objects
	Musics->LoadMusic(Music::ID::Theme, "Theme.mp3");
	Fonts->LoadFont(Font::ID::Derp, "TehFont.ttf", 26);
	Textures->LoadTexture(Texture::ID::Startscreen, "TitleScreen.png");
	Textures->LoadTexture(Texture::ID::Motorist, "CharSheet.png");
	Textures->LoadTexture(Texture::ID::Background, "Background.png");
	Textures->LoadTexture(Texture::ID::Jump1, "LevelRes/Jump1.png");
	Textures->LoadTexture(Texture::ID::SuperJump, "LevelRes/SuperJump.png");
	Textures->LoadTexture(Texture::ID::Finish, "LevelRes/Finish.png");
	Textures->LoadTexture(Texture::ID::BasicG, "LevelRes/Basic.png");
	Textures->LoadTexture(Texture::ID::HudOverlay, "LevelRes/Hud.png");
	Textures->LoadTexture(Texture::ID::Crowd, "LevelRes/Crowd.png");
	

	Background*  background = new Background();
	HudOverlay*  hud        = new HudOverlay();
	Obstalces*   obstacles  = new Obstalces();
	Motorist*    motorist   = new Motorist(obstacles, hud, background);
	StartScreen* title      = new StartScreen();
	
	// Run the engin
	Engine::GetInstance()->Run();
	// Make sure to delete all of the items.
	
	delete motorist;
	motorist = nullptr;
	delete background;
	background = nullptr;
	delete hud;
	hud = nullptr;

	return 0;
}