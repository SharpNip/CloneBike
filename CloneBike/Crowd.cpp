#include "Crowd.h"


Crowd::Crowd()
	: Sprite(Texture::ID::Crowd)
	, itemType(0)
	, currentX(0)
	, currentY(0)
	, currentTime(0)
{
	this->SetPosition((int)currentX, (int)currentY);
}


Crowd::~Crowd()
{
}

void Crowd::Update()
{
	
}
void Crowd::Move()
{
	float dt = Engine::GetInstance()->GetTimer()->GetDeltaTime();
	currentX -= BASESPEED * dt;
	this->SetPosition((int)currentX, 0);
}