#include "BasicG.h"


BasicG::BasicG()
	: Sprite(Texture::ID::BasicG)
	, currentX(0)
	, currentY(0)

{
	this->SetPosition(0, LEVEL_OFFSET);
}


BasicG::~BasicG()
{
}

void BasicG::Move(int speed)
{
	float dt = Engine::GetInstance()->GetTimer()->GetDeltaTime();
	currentX -= speed * dt;
	this->SetPosition((int)currentX, LEVEL_OFFSET);
}
