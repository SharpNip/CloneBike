#pragma once
#include "Common.h"
#include "Obstalces.h"
#include "ResourceIDs.h"


class Jump1 :
	public Sprite
{
public:
	Jump1();
	~Jump1();

	void Update();
	void SetPosition(point<int> point) { this->currentX = point.x; this->currentY = point.y; }
	void SetPosition(int xCoord, int yCoord) { currentX = xCoord; currentY = yCoord; }
	int GetCurrentX() const { return currentX; }
	int GetItemType() const { return itemType; }


private:
	int itemType;
	int currentX;
	int currentY;
	float currentTime;

};

