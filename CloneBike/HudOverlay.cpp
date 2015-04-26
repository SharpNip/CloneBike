#include "HudOverlay.h"


HudOverlay::HudOverlay()
	: Sprite(Texture::ID::HudOverlay)
	, currentX(0)
	, currentY(0)
	, currentTime(0)
	, started(false)
{
	this->SetPosition(0, HUD_POS);

}


HudOverlay::~HudOverlay()
{
}
void HudOverlay::Update()
{
	float delta = Engine::GetInstance()->GetTimer()->GetDeltaTime();

	if (BUTTON->IsKeyPressed(SDL_SCANCODE_J))
	{
		started = true;
	}

	if (started)
	{
		currentTime += delta;
	}

}