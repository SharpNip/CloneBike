#pragma once
#include "Common.h"
#include "Sprite.h"

class Jump6:
	public Sprite
{
public:
	Jump6();
	~Jump6();
private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;

};

