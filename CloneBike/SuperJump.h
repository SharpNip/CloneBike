#pragma once
#include "Libraries.h"

class SuperJump:
	public Sprite
{
public:
	SuperJump();
	~SuperJump();
private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;

};

