#pragma once
#include "Common.h"
#include "Sprite.h"
#include "Jump1.h"
#include "Jump2.h"


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

	void Update();

private:
	Jump1* obstalceArray[3];

};

