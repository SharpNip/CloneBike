#include "Jump1.h"

Jump1::Jump1()
	: Sprite(Texture::ID::Jump1)
	, itemType(0)
	, currentX(0)
	, currentY(0)
{
	this->SetPosition(300, 300);
}


Jump1::~Jump1()
{
}
void Jump1::Move(int speed)
{
	float dt = Engine::GetInstance()->GetTimer()->GetDeltaTime();
	currentX -= 500 * dt;
	this->SetPosition(currentX, OBS_OFFSET);

}