#pragma once
#include "Common.h"
#include "Sprite.h"

class Jump4:
	public Sprite
{
public:
	Jump4();
	~Jump4();
private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;

};

