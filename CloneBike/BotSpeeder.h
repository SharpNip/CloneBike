#pragma once
#include "Libraries.h"
class BotSpeeder:
	public Sprite
{
public:
	BotSpeeder();
	~BotSpeeder();
private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;

};

