#include "Background.h"


Background::Background()
	: currentTime(0)
{
	LoadStartScreen();
	LoadLevel();
}


Background::~Background()
{
	for (int i = 0; i < 3; ++i)
	{
		delete there[i];
		there[i] = nullptr;
	}
	for (int i = 0; i < 2; ++i)
	{
		delete woah[i];
		woah[i] = nullptr;
	}
	
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
	

	Crowd*		crowd1 = new Crowd();
	Crowd*		crowd2 = new Crowd();
	crowd2->SetCurrentX(1600.0f);
	crowd2->SetPosition(1600, 0);
	
	BasicG*     basic1 = new BasicG();
	BasicG*     basic2 = new BasicG();
	BasicG*     basic3 = new BasicG();
	basic2->SetCurrentX(642.0f);
	basic2->SetPosition(642, LEVEL_OFFSET);
	
	basic3->SetCurrentX(1284.0f);
	basic3->SetPosition(1284, LEVEL_OFFSET);

	there[0] = basic1;
	there[1] = basic2;
	there[2] = basic3;
	woah[0] = crowd1;
	woah[1] = crowd2;
}
void Background::Update()
{
	// Paralaxer
	for (int i = 0; i < 3; i++)
	{
		if (there[i]->GetCurrentX() < -642)
		{
			there[i]->SetCurrentX(1284.0f);
			there[i]->SetPosition(1284, LEVEL_OFFSET);
		}
	}
	for (int i = 0; i < 2; i++)
	{
		if (woah[i]->GetCurrentX() < -1600)
		{
			woah[i]->SetCurrentX(1600.0f);
			woah[i]->SetPosition(1600, LEVEL_OFFSET);
		}
	}
	

}
void Background::LoadStartScreen()
{

}