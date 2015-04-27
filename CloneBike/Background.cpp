#include "Background.h"


Background::Background()
	: currentTime(0)
{
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
	crowd1 = new Crowd();
	crowd2 = new Crowd();
	basic1 = new BasicG();
	basic2 = new BasicG();
	basic3 = new BasicG();
	

	
	crowd2->SetCurrentX(1600.0f);
	crowd2->SetPosition(1600, 0);
	

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
