#pragma once
#include "Common.h"
#include "Sprite.h"

///////////
//Level
///////////
// TODO:
//	-Create an array for each sprite
//	-Load in each sprite seperately
//	-Apply speed (as variable) to "move" array towards the left
//	-Enum for each specific item
//	-Cut sprites up for each item
//	-Check for what sprites is at the player's location

class Background :
	public Sprite
{
public:
	Background();
	~Background();




private:
	float passingSpeed;
	float baseSpeed;
};

