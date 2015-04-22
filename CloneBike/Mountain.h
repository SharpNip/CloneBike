#pragma once
#include "Common.h"
#include "Sprite.h"

class Mountain:
	public Sprite
{
public:
	Mountain();
	~Mountain();
private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;

};

