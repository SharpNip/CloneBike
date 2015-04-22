#pragma once
#include "Libraries.h"
class TopGrass:
	public Sprite
{
public:
	TopGrass();
	~TopGrass();
private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;

};

