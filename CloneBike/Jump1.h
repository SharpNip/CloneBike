#pragma once
#include "Common.h"
#include "Libraries.h"


class Jump1 :
	public Sprite
{
public:
	Jump1();
	~Jump1();
	// Places the obstacle anywhere required using a point x/y 
	void SetPosition(point<int> point)       { this->currentX = point.x; this->currentY = point.y; }
	// Places the obstacle anywhere required
	void SetPosition(int xCoord, int yCoord) { currentX = xCoord; currentY = yCoord; }
	// Used to set the obstacle'sx coordinate to make it move tot he left
	void SetCurrentX(int point)              { this->currentX = point; }
	// Returns its X coordinate to determine where it is with relationto the player
	int GetCurrentX()                  const { return currentX; }
	// Returns the type of object this sprite is (obstacle type)
	int GetItemType()                  const { return itemType; }
	// This method causes the sprites to move with the same corresponding speed
	// that the player has
	void Move(int speed);

private:
	int itemType;
	int currentX;
	int currentY;

};

