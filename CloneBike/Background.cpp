#include "Background.h"


Background::Background()
	: currentTime(0)
{
	crowd1 = new Crowd();
	crowd2 = new Crowd();
	basic1 = new BasicG();
	basic2 = new BasicG();
	basic3 = new BasicG();
	there[0] = basic1;
	there[1] = basic2;
	there[2] = basic3;
	woah[0] = crowd1;
	woah[1] = crowd2;
	LoadLevel();

}
Background::~Background()
{
	delete crowd1;
	delete crowd2;
	delete basic1;
	delete basic2;
	delete basic3;

	crowd1   = nullptr;
	crowd2   = nullptr;
	basic1   = nullptr;
	basic2   = nullptr;
	basic3   = nullptr;
}
void Background::LoadLevel()
{	
	crowd2->SetCurrentX(1600.0f);
	crowd2->SetPosition(1600, 0);

	basic2->SetCurrentX(642.0f);
	basic2->SetPosition(642, LEVEL_OFFSET);
	
	basic3->SetCurrentX(1284.0f);
	basic3->SetPosition(1284, LEVEL_OFFSET);
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
void Background::Move()
{
	for (int i = 0; i < 3; i++)
	{
		there[i]->Move();	
	}
	for (int i = 0; i < 2; i++)
	{
		woah[i]->Move();
	}
}