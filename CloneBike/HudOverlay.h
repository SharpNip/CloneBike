#pragma once
#include "Common.h"
#include "Sprite.h"
#include "Scorer.h"

class HudOverlay :
	public Sprite
{
public:
	HudOverlay();
	~HudOverlay();

	void Update();
private:
	float currentX;
	float currentY;
	bool started;
	Scorer* scorer;
};

