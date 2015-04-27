#pragma once
#include "Common.h"
#include "Sprite.h"
#include "Jump1.h"
#include "SuperJump.h"


class Motorist;

class Obstalces :
	public Sprite
{

	friend class Motorist;
public:
	Obstalces();
	~Obstalces();
	int FindItem();
	int GetX();
	int GetLane();
	void Move();
	void Update();

private:
	SuperJump* obstalceSupArray[3];
	SuperJump* supJump1;
	SuperJump* supJump2;
	SuperJump* supJump3;
	Jump1*	   obstalceArray[3];
	Jump1*	   jump1;
	Jump1*	   jump2;
	Jump1*	   jump3;


};

