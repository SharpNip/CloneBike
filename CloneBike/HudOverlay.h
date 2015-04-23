#pragma once
#include "Libraries.h"
class HudOverlay :
	public Sprite
{
public:
	HudOverlay();
	~HudOverlay();
private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;
};

