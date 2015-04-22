#pragma once
#include "Common.h"
#include "Sprite.h"

class Jump3:
	public Sprite
{
public:
	Jump3();
	~Jump3();
private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;

};

