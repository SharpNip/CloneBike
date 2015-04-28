#pragma once
#include "Common.h"
#include "Sprite.h"
#include "Jump1.h"
#include "Finish.h"

////////////////////////////////////////////////////////////
// Container class for all interactive objects in the level
////////////////////////////////////////////////////////////

class Obstalces :
	public Sprite
{
public:
	Obstalces();
	~Obstalces();
	// Parses through each array of obstacles and returns its type
	int FindItem();
	// Parses through each array of obstacles and returns its x coord (to compare with player)
	int GetX();
	// Parses through each array of obstacles and returns the lane in which it is found 
	// (for single / double lane objects)
	int GetLane();
	// Moves all of the objects in this class
	void Move(int speed);
	// To be used if resuse of assets is desired
	void Update();
	// Sets up obstacles in their initial positions
	void SetObstacles();

private:
	//Jump1*	   obstalceArray[3];
	//Jump1*	   jump1;
	//Jump1*	   jump2;
	//Jump1*	   jump3;
	//Finish*      finish;
};

