#pragma once
#include "Libraries.h"

class TopBlocker: 
	public Sprite
{
public:
	TopBlocker();
	~TopBlocker();
private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;

};

