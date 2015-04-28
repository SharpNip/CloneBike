#pragma once
#include "Common.h"
#include "Sprite.h"
#include "Scorer.h"


////////////////////////////////////////////////////////////////////
// HUD class that takes care of the hud at the bottom of the screen
////////////////////////////////////////////////////////////////////


class HudOverlay :
	public Sprite
{
public:
	HudOverlay();
	~HudOverlay();
	// Used to start the timer once th player has exited the Title screen or end screen
	void Update();

private:
	float currentX;
	float currentY;
	bool started;
	Scorer* scorer;
};

