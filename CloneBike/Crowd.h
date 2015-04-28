#pragma once
#include "Common.h"
#include "Libraries.h"


/////////////////////////////////////////
// Class for the Crowd in the background
/////////////////////////////////////////

class Crowd :
	public Sprite
{
public:
	Crowd();
	~Crowd();
	// Returns the X coord to use for parallaxing
	float GetCurrentX() const { return currentX; }
	// Used to replace the item at a "spawning location" to parallax
	void SetCurrentX(float point){ this->currentX = point; }
	// Moves the sprite towards the left with the corresponding speed of the Motorist class
	void Move(int speed);

private:
	float currentX;
	float currentY;
};

