#pragma once

#include "Libraries.h"
class BasicG :
	public Sprite
{
public:
	BasicG();
	~BasicG();

	void Update();


private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;
};

