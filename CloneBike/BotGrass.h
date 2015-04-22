#pragma once
#include "Libraries.h"
class BotGrass:
	public Sprite
{
public:
	BotGrass();
	~BotGrass();
private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;

};

