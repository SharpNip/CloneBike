#include "Finish.h"


Finish::Finish()
	: itemType(0)
	, currentX(0)
	, currentY(0)
	, currentTime(0)
{
}


Finish::~Finish()
{
}

void Finish::Move()
{
	float dt = Engine::GetInstance()->GetTimer()->GetDeltaTime();
	currentX -= BASESPEED * dt;
	this->SetPosition((int)currentX, LEVEL_OFFSET);
}
