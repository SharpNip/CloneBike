#pragma once
#include "Common.h"
#include "Sprite.h"

class Finish:
	public Sprite
{
public:
	Finish();
	~Finish();

private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;

};

