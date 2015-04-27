#pragma once
#include "Common.h"
#include "Sprite.h"
#include "Libraries.h"

class Finish:
	public Sprite
{
public:
	Finish();
	~Finish();
	void Move();

private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;

};

