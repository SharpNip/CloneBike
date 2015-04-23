#include "HudOverlay.h"


HudOverlay::HudOverlay()
	: Sprite(Texture::ID::HudOverlay)
	, itemType(0)
	, currentX(0)
	, currentY(0)
	, currentTime(0)
{
	this->SetPosition(0, HUD_POS);
}


HudOverlay::~HudOverlay()
{
}
