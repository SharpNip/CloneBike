#pragma once
#include "Libraries.h"
class TopSlower:
	public Sprite
{
public:
	TopSlower();
	~TopSlower();
private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;

};

