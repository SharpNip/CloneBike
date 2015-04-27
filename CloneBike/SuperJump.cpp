#include "SuperJump.h"


SuperJump::SuperJump()
	: itemType(0)
	, currentX(0)
	, currentY(0)
	, currentTime(0)
{
}


SuperJump::~SuperJump()
{
}
void SuperJump::Move()
{
	float dt = Engine::GetInstance()->GetTimer()->GetDeltaTime();
	currentX -= BASESPEED * dt;
	this->SetPosition((int)currentX, 0);
	
}

