#include "Obstalces.h"


Obstalces::Obstalces()
	: jump1(nullptr)
	, jump2(nullptr)
	, jump3(nullptr)
{
	jump1 = new Jump1();
	jump2 = new Jump1();
	jump3 = new Jump1();
	obstalceArray[0] = jump1;
	obstalceArray[1] = jump2;
	obstalceArray[2] = jump3;
}


Obstalces::~Obstalces()
{
	delete jump1;
	delete jump2;
	delete jump3;	
	jump1 = nullptr;
	jump2 =	nullptr;
	jump3 =	nullptr;
}

void Obstalces::Update()
{
	
}
int Obstalces::FindItem()
{
	int type = 0;
	for (int i = 0; i < 3; i++)
	{
		type = obstalceArray[i]->GetItemType();
		type = obstalceSupArray[i]->GetItemType();
	}
	return type;
}
int Obstalces::GetX()
{
	int distance = 0;
	for (int i = 0; i < 3; i++)
	{
		distance = obstalceArray[i]->GetCurrentX();
		obstalceSupArray[i]->GetCurrentX();
	}
	return distance;
}
int Obstalces::GetLane()
{
	int lane = 0;
	for (int i = 0; i < 3; i++)
	{
		lane = obstalceArray[i]->GetCurrentLane();
		obstalceSupArray[i]->GetCurrentLane();
	}
	return lane;

}
void Obstalces::Move()
{

}
