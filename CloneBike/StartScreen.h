#pragma once

#include "Common.h"
#include "Libraries.h"
#include "Theme.h"
////////////////////////////////////////////////////
// Class used for the Title Screen sprite and theme
////////////////////////////////////////////////////
class StartScreen:
	public Sprite
{
public:
	StartScreen();
	~StartScreen();
	// This is only used to check if the player presses the "start button"
	// to dismiss this sprite
	void Update();
	// Stops the music and moves the title screen sprite out of sight
	void Kill();

private:
	Theme* song;

};

