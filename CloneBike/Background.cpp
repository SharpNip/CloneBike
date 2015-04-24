#include "Background.h"


Background::Background()
	: currentTime(0)
{
	 LoadLevel();
}


Background::~Background()
{
}

void Background::LoadLevel()
{
	Textures->LoadTexture(Texture::ID::Motorist, "CharSheet.png");
	Textures->LoadTexture(Texture::ID::Background, "Background.png");
	Textures->LoadTexture(Texture::ID::Jump1, "LevelRes/Jump1.png");
	Textures->LoadTexture(Texture::ID::Jump2, "LevelRes/Jump2.png");
	Textures->LoadTexture(Texture::ID::Jump3, "LevelRes/Jump3.png");
	Textures->LoadTexture(Texture::ID::Jump4, "LevelRes/Jump4.png");
	Textures->LoadTexture(Texture::ID::Jump5, "LevelRes/Jump5.png");
	Textures->LoadTexture(Texture::ID::Jump6, "LevelRes/Jump6.png");
	Textures->LoadTexture(Texture::ID::Jump7, "LevelRes/Jump7.png");
	Textures->LoadTexture(Texture::ID::SuperJump, "LevelRes/SuperJump.png");
	Textures->LoadTexture(Texture::ID::Finish, "LevelRes/Finish.png");
	Textures->LoadTexture(Texture::ID::AllGrass, "LevelRes/AllGrass.png");
	Textures->LoadTexture(Texture::ID::BotGrass, "LevelRes/BotGrass.png");
	Textures->LoadTexture(Texture::ID::BotSpeeder, "LevelRes/BotSpeeder.png");
	Textures->LoadTexture(Texture::ID::BotBlocker, "LevelRes/BotBlocker.png");
	Textures->LoadTexture(Texture::ID::TopBlocker, "LevelRes/TopBlocker.png");
	Textures->LoadTexture(Texture::ID::TopSpeeder, "LevelRes/TopSpeeder.png");
	Textures->LoadTexture(Texture::ID::TopGrass, "LevelRes/TopGrass.png");
	Textures->LoadTexture(Texture::ID::Mountain, "LevelRes/Mountain.png");
	Textures->LoadTexture(Texture::ID::TopSlower, "LevelRes/TopSlower.png");
	Textures->LoadTexture(Texture::ID::BotSlower, "LevelRes/BotSlower.png");
	Textures->LoadTexture(Texture::ID::Overpass, "LevelRes/Overpass.png");
	Textures->LoadTexture(Texture::ID::BasicG, "LevelRes/Basic.png");
	Textures->LoadTexture(Texture::ID::HudOverlay, "LevelRes/Hud.png");
	Textures->LoadTexture(Texture::ID::Crowd, "LevelRes/Crowd.png");
	
	
	BasicG*		basic = new BasicG();
	Crowd*		crowd = new Crowd();
}
void Background::Update()
{
		


}