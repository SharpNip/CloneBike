#pragma once
#include "Common.h"
#include "Sprite.h"

class Jump7:
	public Sprite
{
public:
	Jump7();
	~Jump7();
private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;

};

