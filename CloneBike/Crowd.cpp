#include "Crowd.h"


Crowd::Crowd()
	: Sprite(Texture::ID::Crowd)
	, itemType(0)
	, currentX(0)
	, currentY(0)
	, currentTime(0)
{
	this->SetPosition(0, 0);
}


Crowd::~Crowd()
{
}
