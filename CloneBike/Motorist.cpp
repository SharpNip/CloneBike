#include "Motorist.h"


Motorist::Motorist()
	: Animation(MOTORIST_PATH, DRIVE_NO_FRAMES(), ANIM_DEFAULT_SPEED, FRAME_SIZE(), DRIVE_START_SRC())
	, currentAction(DRIVE)
{

	//Start the animation on creation
	this->Play();
	//Make it loop
	this->SetIsLooping(true);

	this->SetPosition(200, 375);
}


Motorist::~Motorist()
{
}

void Motorist::actionState(action newAction)
{
	if (this->currentAction != newAction)
	{
		switch (newAction)
		{
		case DRIVE:
			this->SetStartSrcPos(DRIVE_START_SRC());
			this->SetNbFrame(DRIVE_NO_FRAMES());
			this->SetFrameRate(ANIM_FAST_SPEED);
			//Using varying frame rates cause issues since we won't instantly change to the other frame.
			break;
		case ROLL:
			this->SetStartSrcPos(ROLL_START_SRC());
			this->SetNbFrame(ROLL_NO_FRAMES());
			this->SetFrameRate(ANIM_DEFAULT_SPEED);
			break;
		case LEFT:
			this->SetStartSrcPos(TURNL_START_SRC());
			this->SetNbFrame(TURNL_NO_FRAMES());
			this->SetFrameRate(ANIM_DEFAULT_SPEED);
			break;
		case RIGHT:
			this->SetStartSrcPos(TURNR_START_SRC());
			this->SetNbFrame(TURNR_NO_FRAMES());
			this->SetFrameRate(ANIM_DEFAULT_SPEED);
			break;
		default:
			break;
		}
		//It's important to reset back to the first frame on change
		this->currentAction = newAction;
		this->ResetCurrentFrame();
	}

	

}
void Motorist::Update()
{
	Animation::Update();


	//Don't mind the brackets. Simply tried to save some screen space.
	//Press Space to Pause & Resume
	if (Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_SPACE)){
		if (this->GetIsPlaying()){
			this->Stop();
		}
		else {
			this->Play();
		}
	}
	//Press 1 for Idle
	if (Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_1)){
		actionState(DRIVE);
	}
	//Press 2 for Walk
	if (Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_2)){
		actionState(ROLL);
	}
	//Press 3 for Dizzy
	if (Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_UP)){
		actionState(LEFT);
	}
	//Press 3 for Dizzy
	if (Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_DOWN)){
		actionState(RIGHT);
	}
}