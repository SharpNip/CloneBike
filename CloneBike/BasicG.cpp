#include "BasicG.h"


BasicG::BasicG()
	: Sprite(Texture::ID::BasicG)
	, currentX(0)
	, currentY(0)
	, currentTime(0)
	, anchorPoint(0)
{
	this->SetPosition(0, LEVEL_OFFSET);
}


BasicG::~BasicG()
{
}

void BasicG::Update()
{
	float dt = Engine::GetInstance()->GetTimer()->GetDeltaTime();

	if (BUTTON->IsKeyHeld(SDL_SCANCODE_J))
	{
		currentX -= BASESPEED * dt;
		this->SetPosition(currentX, LEVEL_OFFSET);
	}
}
