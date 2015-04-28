#pragma once
#include "Common.h"
#include "Libraries.h"

///////////////////////////////////////////
// Class for the Basic Ground sprite (road)
///////////////////////////////////////////


class BasicG :
	public Sprite
{
public:
	BasicG();
	~BasicG();
	// Returns the X coord of the sprite to use for parallax
	float GetCurrentX() const    { return currentX; }
	// Used to move the sprite back to a "spawning location" so it can perform a parallax
	void SetCurrentX(float point){ this->currentX = point; }
	// Moves with the speed coming from the Motorist Class
	void Move(int speed);


private:
	float currentX;
	float currentY;
};

