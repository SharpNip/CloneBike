#include "Libraries.h"


int main(int argc, char* args[])
{
//	bool gameStart = false;
	// Get the engin instance
	Engine::GetInstance()->Init(800, 750);
	// Declaration of all objects
	//StartScreen *screen = new StartScreen();
//	if (BUTTON->IsKeyPressed(SDL_SCANCODE_RETURN))
//{
		
//	}
//if (gameStart)
//	{
//		Gameplay *game = new Gameplay();
		

	//}
	Musics->LoadMusic(Music::ID::Theme, "Theme.mp3");
	Fonts->LoadFont(Font::ID::Derp, "TehFont.ttf", 28);
	Textures->LoadTexture(Texture::ID::Startscreen, "TitleScreen.png");
	
	
	Background* background = new Background();
	HudOverlay* hud      = new HudOverlay();
	Motorist*   motorist = new Motorist();
	//Scorer*		scorer = new Scorer();
	StartScreen* title = new StartScreen();



	
	
	
	
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