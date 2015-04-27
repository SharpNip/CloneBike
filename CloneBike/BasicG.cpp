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
}
void BasicG::Move()
{
	float dt = Engine::GetInstance()->GetTimer()->GetDeltaTime();
	currentX -= BASESPEED * dt;
	this->SetPosition((int)currentX, LEVEL_OFFSET);
}
