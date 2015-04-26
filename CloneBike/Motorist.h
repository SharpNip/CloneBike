#pragma once

#include "Common.h"
#include "Animation.h"


//Sheet for the character
#define MOTORIST_PATH "CharSheet.png" 

class Motorist :
	public Animation
{

public:
	Motorist();
	~Motorist();
	
	
	void Update();


private:
	//	
	//	Standby : Idle state
	//	Drive   : When driving normally
	//  Roll    : When player has crashed
	//	Run     : Running to bike
	//	Left    : Turns left (Up)
	//	Right   : Turns right (Down)

	enum action { IDLE, STANDBY, DRIVE, ROLL, RUN, LEFT, RIGHT, JUMP };
	action currentAction;
	void actionState(action newAction);
	
	int currentLane;
	int currentY;
	
	bool isJumping;
	bool isCrashed;
	bool isMoving;

	float jumpHeight;
	float angle;
	const int ON_GROUND;
	float waiting;
	
	const int IDLE_NO_FRAMES()		   { return 1; }
	const int DRIVE_NO_FRAMES()        { return 2; }
	const int ROLL_NO_FRAMES()         { return 11; }
	const int RUN_NO_FRAMES()          { return 0;}
	const int TURNL_NO_FRAMES()        { return 1; }
	const int TURNR_NO_FRAMES()        { return 1; }
	const point<int> FRAME_SIZE()      { return{ 82, 94 }; };
	const point<int> IDLE_START_SRC()  { return{ 0, 0 }; };
	const point<int> DRIVE_START_SRC() { return{ 0, 97  }; };
	const point<int> ROLL_START_SRC()  { return{ 0, 188 }; };
	const point<int> TURNL_START_SRC() { return{ 0, 302 }; };
	const point<int> TURNR_START_SRC() { return{ 0, 398 }; };

protected:
	void SetLane(int lane)        { currentLane = lane; }
	int GetCurrentLane() const    { return currentLane; }
	int GetCurrentY() const       { return currentY; }

};

