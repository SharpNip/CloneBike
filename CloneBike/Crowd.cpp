#include "Crowd.h"


Crowd::Crowd()
	: Sprite(Texture::ID::Crowd)
	, currentX(0)
	, currentY(0)

{
	this->SetPosition((int)currentX, (int)currentY);
}


Crowd::~Crowd()
{
}

void Crowd::Move(int speed)
{
	float dt = Engine::GetInstance()->GetTimer()->GetDeltaTime();
	currentX -= speed * dt;
	this->SetPosition((int)currentX, 0);
}