#include "Jump1.h"

Jump1::Jump1()
	: Sprite(Texture::ID::Jump1)
	, itemType(0)
	, currentX(0)
	, currentY(0)
	, currentTime(0)
{
}


Jump1::~Jump1()
{
}

void Jump1::Update()
{
	
	float dt = Engine::GetInstance()->GetTimer()->GetDeltaTime();

	if (BUTTON->IsKeyHeld(SDL_SCANCODE_J))
	{
		currentX -= BASESPEED * dt;
		this->SetPosition(currentX, LEVEL_OFFSET);
	}



}