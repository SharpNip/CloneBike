#pragma once
#include "Common.h"
#include "Libraries.h"


class AllGrass:
	public Sprite
{
public:
	AllGrass();
	~AllGrass();

	
private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;

};

