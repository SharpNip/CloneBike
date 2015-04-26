#pragma once

#include "Libraries.h"
class BasicG :
	public Sprite
{
public:
	BasicG();
	~BasicG();

	void Update();
	float GetCurrentX() const { return currentX; }
	void SetCurrentX(float point){ this->currentX = point; }


private:
	float currentX;
	float currentY;
	float currentTime;
	int anchorPoint;
};

