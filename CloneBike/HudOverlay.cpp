#include "HudOverlay.h"


HudOverlay::HudOverlay()
	: Sprite(Texture::ID::HudOverlay)
	, currentX(0)
	, currentY(0)
	, started(false)
	, scorer(nullptr)
{
	this->SetPosition(0, HUD_POS);
	scorer = new Scorer();
}


HudOverlay::~HudOverlay()
{
}
void HudOverlay::Update()
{
	float delta = Engine::GetInstance()->GetTimer()->GetDeltaTime();
	if (!started)
	{
		if (BUTTON->IsKeyReleased(SDL_SCANCODE_G))
		{
			started = true;
			scorer->Start();
		}
	}
}