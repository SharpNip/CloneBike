#include "Motorist.h"
#include "Libraries.h"

Motorist::Motorist()
	: Animation(Texture::ID::Motorist, DRIVE_NO_FRAMES(), ANIM_DEFAULT_SPEED, DRIVE_START_SRC(), FRAME_SIZE())
	, currentAction(DRIVE)
{

	//Start the animation on creation
	this->Play();
	//Make it loop
	this->SetIsLooping(true);

	this->SetPosition(200, 475);
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
			this->SetSrcPos(DRIVE_START_SRC());
			this->SetNbFrame(DRIVE_NO_FRAMES());
			this->SetFrameRate(ANIM_FAST_SPEED);
			break;
		case ROLL:
			this->SetSrcPos(ROLL_START_SRC());
			this->SetNbFrame(ROLL_NO_FRAMES());
			this->SetFrameRate(ANIM_DEFAULT_SPEED);
			break;
		case LEFT:
			this->SetSrcPos(TURNL_START_SRC());
			this->SetNbFrame(TURNL_NO_FRAMES());
			this->SetFrameRate(ANIM_DEFAULT_SPEED);
			break;
		case RIGHT:
			this->SetSrcPos(TURNR_START_SRC());
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
	//Press 1 for Drive
	if (Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_1)){
		actionState(DRIVE);
	}
	//Press 2 for Rolling
	if (Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_2)){
		actionState(ROLL);
	}
	//Press 3 for TurnLeft
	if (Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_UP)){
		actionState(LEFT);
	}
	//Press 3 for TurnRight
	if (Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_DOWN)){
		actionState(RIGHT);
	}
	if (Engine::GetInstance()->GetInput()->IsKeyReleased(SDL_SCANCODE_DOWN) ||
		Engine::GetInstance()->GetInput()->IsKeyReleased(SDL_SCANCODE_UP)){
		actionState(DRIVE);
	}

}