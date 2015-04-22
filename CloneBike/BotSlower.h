#pragma once
#include "Libraries.h"
class BotSlower:
	public Sprite
{
public:
	BotSlower();
	~BotSlower();
private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;

};

