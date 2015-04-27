#pragma once
#include "Libraries.h"

class SuperJump:
	public Sprite
{
public:
	SuperJump();
	~SuperJump();
	void SetPosition(point<int> point)       { this->currentX = point.x; this->currentY = point.y; }
	void SetPosition(int xCoord, int yCoord) { currentX = xCoord; currentY = yCoord; }
	int GetCurrentX()                  const { return currentX; }
	int GetItemType()                  const { return itemType; }
	int GetCurrentLane()               const { return currentY; }
	void Move();
private:
	const int itemType;
	float currentX;
	float currentY;
	float currentTime;

};

