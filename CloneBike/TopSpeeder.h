#pragma once
#include "Libraries.h"
class TopSpeeder:
	public Sprite
{
public:
	TopSpeeder();
	~TopSpeeder();
private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;

};

