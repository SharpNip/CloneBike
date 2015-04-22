#pragma once
#include "Libraries.h"

class BotBlocker:
	public Sprite
{
public:
	BotBlocker();
	~BotBlocker();

private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;

};

