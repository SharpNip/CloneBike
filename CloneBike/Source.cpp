#include "Libraries.h"
#include "Ship.h"
#include "Motorist.h"

int main(int argc, char* args[])
{
	
	// Get the engin instance
	Engine::GetInstance()->Init(800, 750);
	// Declaration of all objects
	
	Textures->LoadTexture(Texture::ID::Motorist, "CharSheet.png");
	

	Motorist* motorist = new Motorist();
	// Run the engin
	Engine::GetInstance()->Run();
	// Make sure to delete all of the items.
	delete motorist;
	motorist = nullptr;

	return 0;
}