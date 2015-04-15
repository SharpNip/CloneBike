#include "Libraries.h"
#include "Ship.h"
#include "Motorist.h"

typedef int* pInt;

int main(int argc, char* args[])
{
	
	// Get the engin instance
	Engine::GetInstance()->Init(800, 750);
	// Declaration of all objects
	Motorist* motorist = new Motorist();
	// Run the engin
	Engine::GetInstance()->Run();
	// Make sure to delete all of the items.
	delete motorist;
	return 0;
}