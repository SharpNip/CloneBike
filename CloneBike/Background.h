#pragma once
#include "Common.h"
#include "Libraries.h"

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
	Background(float bs, float ss);
	~Background();

	void LoadLevel();

	void Update();

	

private:
	double currentTime;
	Sprite items[];

};

