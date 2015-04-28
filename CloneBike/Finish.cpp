#include "Finish.h"


Finish::Finish()
	: itemType(0)
	, currentX(0)
	, currentY(0)

{
}


Finish::~Finish()
{
}

void Finish::Move(int speed)
{
	float dt = Engine::GetInstance()->GetTimer()->GetDeltaTime();
	currentX -= speed * dt;
	this->SetPosition((int)currentX, LEVEL_OFFSET);
}
