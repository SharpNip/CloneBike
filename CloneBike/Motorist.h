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
	/*	
		Standby : Idle state
		Drive : When driving normally
		Roll : When player has crashed
		Run : Running to bike
		Left : Turns left (Up)
		Right : Turns right (Down)
	*/
	enum action { STANDBY, DRIVE, ROLL, RUN, LEFT, RIGHT };

	void actionState(action newAction);
	
	const int DRIVE_FRAMES() { return 2; }
	const int ROLL_FRAMES() { return 8; }
	const int RUN_FRAMES() { return 10; }
	const point<int> FRAME_SIZE() { return{82, 88}; };








};

