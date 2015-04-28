#pragma once
#include "Common.h"
#include "BasicG.h"
#include "Crowd.h"

/////////////////////////////////////////////////////////////////////
// Background is the container class for all non-interactive objects
/////////////////////////////////////////////////////////////////////

class Background :
	public Component
{
public:
	Background();
	~Background();
	// Once all the pointers have been initialised, this "loads" the level 
	// by placing the items in their corresponding places.
	void LoadLevel();

	// Used to 
	void Update();
	void Move(int speed);

	

private:
	BasicG* there[3];
	Crowd*  woah[2];
	Crowd*	crowd1;
	Crowd*	crowd2;
	BasicG* basic1;
	BasicG* basic2;
	BasicG* basic3;



};

