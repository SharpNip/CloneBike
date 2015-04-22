#pragma once
#include "Common.h"
#include "Sprite.h"


class Jump1:
	public Sprite
{
public:
	Jump1();
	~Jump1();
private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;

};

