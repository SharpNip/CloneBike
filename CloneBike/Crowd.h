#pragma once
#include "Libraries.h"
class Crowd :
	public Sprite
{
public:
	Crowd();
	~Crowd();
private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;
};

