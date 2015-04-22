#pragma once
#include "Common.h"
#include "Sprite.h"

class Overpass:
	public Sprite
{
public:
	Overpass();
	~Overpass();
private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;

};

