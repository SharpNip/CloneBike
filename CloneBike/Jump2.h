#pragma once
#include "Common.h"
#include "Sprite.h"

class Jump2:
	public Sprite
{
public:
	Jump2();
	~Jump2();
private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;

};

