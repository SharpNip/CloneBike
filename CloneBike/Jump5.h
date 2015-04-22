#pragma once
#include "Common.h"
#include "Sprite.h"

class Jump5:
	public Sprite
{
public:
	Jump5();
	~Jump5();
private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;

};

