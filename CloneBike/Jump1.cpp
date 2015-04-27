#include "Jump1.h"

Jump1::Jump1()
	: Sprite(Texture::ID::Jump1)
	, itemType(1)
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
	
}
void Jump1::Move()
{
	float dt = Engine::GetInstance()->GetTimer()->GetDeltaTime();
	currentX -= BASESPEED * dt;
	this->SetPosition(currentX, LEVEL_OFFSET);

}