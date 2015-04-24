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

	Background* background = new Background();
	HudOverlay* hud      = new HudOverlay();
	Motorist*   motorist = new Motorist();

	
	
	
	
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