#pragma once
#include "Libraries.h"
class Crowd :
	public Sprite
{
public:
	Crowd();
	~Crowd();

	float GetCurrentX(){ return currentX; }
	void SetCurrentX(float point){ this->currentX = point; }
	void Update();

private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;
};

