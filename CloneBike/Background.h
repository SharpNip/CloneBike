#pragma once
#include "Common.h"
#include "BasicG.h"
#include "Crowd.h"

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
	public Component
{
public:
	Background();
	~Background();

	void LoadLevel();

	void Update();

	

private:
	double currentTime;
	BasicG* there[3];
	Crowd*  woah[2];
	Crowd*	crowd1;
	Crowd*	crowd2;
	BasicG* basic1;
	BasicG* basic2;
	BasicG* basic3;



};

