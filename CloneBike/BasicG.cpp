#include "BasicG.h"


BasicG::BasicG()
	: Sprite(Texture::ID::BasicG)
	, itemType(0)
	, currentX(0)
	, currentY(0)
	, currentTime(0)
{
	this->SetPosition(0, LEVEL_OFFSET);
}


BasicG::~BasicG()
{
}
