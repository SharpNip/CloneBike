#include "Obstalces.h"


Obstalces::Obstalces()
	//: jump1(nullptr)
	//, //jump2(nullptr)
	//, //jump3(nullptr)
	//,finish(nullptr)
{
	//jump1	 = new Jump1();
	//jump2	 = new Jump1();
	//jump3	 = new Jump1();
	//finish   = new Finish();

	//obstalceArray[0] = jump1;
	//obstalceArray[1] = jump2;
	//obstalceArray[2] = jump3;
	//SetObstacles();
}


Obstalces::~Obstalces()
{
	//delete jump1;
	//delete jump2;
	//delete jump3;	
	//delete finish;
	
	//jump1 = nullptr;
	//jump2 =	nullptr;
	//jump3 =	nullptr;
	//finish   = nullptr;
}
// Would have been used to reuse the same assets by parallaxing them, instead of newing a bunch of them.
void Obstalces::Update()
{
	
}
int Obstalces::FindItem()
{
	int type = 0;
	//for (int i = 0; i < 3; i++)
	//{
	//	type = obstalceArray[i]->GetItemType();
	//}
	return type;
}
int Obstalces::GetX()
{
	int distance = 0;
	//for (int i = 0; i < 3; i++)
	//{
	//	distance = obstalceArray[i]->GetCurrentX();
	//}
	return distance;
}
int Obstalces::GetLane()
{
	int lane = 0;
	//for (int i = 0; i < 3; i++)
	//{
	//	lane = obstalceArray[i]->GetCurrentLane();
	//}
	return lane;

}
void Obstalces::Move(int speed)
{
	//for (int i = 0; i < 3; i++)
	//{
	//	obstalceArray[i]->Move(speed);
	//}
	//finish->Move();
}
void Obstalces::SetObstacles()
{
	//jump1->SetCurrentX(300);
	//jump1->SetPosition(300, OBS_OFFSET);
	//jump2->SetCurrentX(200);
	//jump2->SetPosition(200, OBS_OFFSET);
	//jump3->SetCurrentX(100);
	//jump3->SetPosition(100, OBS_OFFSET);

}