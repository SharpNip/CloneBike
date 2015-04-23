#include "BotSpeeder.h"


BotSpeeder::BotSpeeder()
	: Sprite(Texture::ID::BotSpeeder)
	, itemType(0)
	, currentX(0)
	, currentY(0)
	, currentTime(0)
{
	this->SetPosition(currentX, LEVEL_OFFSET);
}


BotSpeeder::~BotSpeeder()
{
}
