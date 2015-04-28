#pragma once
#include "Common.h"
#include "Libraries.h"
#include "Background.h"
#include "Obstalces.h"
#include "HudOverlay.h"

///////////////////////////////////////////////////////////////////////////
// Player's main class, injected with important elements to smooth gameplay
///////////////////////////////////////////////////////////////////////////

class Motorist :
	public Animation
{

public:
	Motorist();
	// Copy constructor to gain acess to the various game elements, to
	// enchance interactivity
	Motorist(Obstalces* obstacles, HudOverlay* hud, Background* backGround);
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
	// Sets a new action from the list above
	void actionState(action newAction);
	
	int currentLane;
	int currentY;
	
	bool isJumping;
	bool isFalling;
	bool isCrashed;
	bool isMoving;

	float regSpeed;
	// THe motorist doesn't stay stationary when tumbling... Who would?
	const int crashedSpeed;

	float jumpHeight;
	float angle;
	const int ON_GROUND;
	float waiting;
	
	// Pointers to all of the game elements this class should be able to interact with
	Background* mBG;
	HudOverlay* mHud;
	Obstalces*  mObs;

	// Declaration of all sprite animations and their corresponding number of frames
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
	// To allow a progressive gain in speed, normal driving speed is set incrementally
	void SetRegSpeed(float speed) { this->regSpeed = speed; }
	// This method dictates the movement of all elements on screen,
	// including the background and the obstacles, to the player's current speed
	void Move();
};

