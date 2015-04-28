#pragma once
#include "Common.h"
#include "Sprite.h"
#include "Libraries.h"


///////////////////////////////////////
// Class that contains the Finish line
///////////////////////////////////////

class Finish:
	public Sprite
{
public:
	Finish();
	~Finish();
	// Updates the X coord of the sprite to move it towards the left with the speed at which the Motorist is moving
	void Move(int speed);

private:
	const int itemType;
	float currentX;
	float currentY;


};

