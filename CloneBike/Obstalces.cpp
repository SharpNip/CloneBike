#include "Obstalces.h"


Obstalces::Obstalces()
{
	//for (int i = 0; i < 3; i++)
	//{
	//	obstalceArray[i] = new Jump1();
	//}


}


Obstalces::~Obstalces()
{
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
	}
	return type;
}
int Obstalces::GetX()
{
	int distance = 0;
	for (int i = 0; i < 3; i++)
	{
		distance = obstalceArray[i]->GetCurrentX();
	}
	return distance;
}
