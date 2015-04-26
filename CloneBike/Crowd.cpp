#include "Crowd.h"


Crowd::Crowd()
	: Sprite(Texture::ID::Crowd)
	, itemType(0)
	, currentX(0)
	, currentY(0)
	, currentTime(0)
{
	this->SetPosition(currentX, currentY);
}


Crowd::~Crowd()
{
}

void Crowd::Update()
{
	float dt = Engine::GetInstance()->GetTimer()->GetDeltaTime();

	if (BUTTON->IsKeyHeld(SDL_SCANCODE_J))
	{
		currentX -= BASESPEED * dt;
		this->SetPosition(currentX, 0);
	}
}