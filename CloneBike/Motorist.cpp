#include "Motorist.h"
#include "Libraries.h"

Motorist::Motorist()
	: Animation(Texture::ID::Motorist, DRIVE_NO_FRAMES(), ANIM_DEFAULT_SPEED, DRIVE_START_SRC(), FRAME_SIZE())
	, currentAction(DRIVE)
	, jumpHeight(0, 0)
	, onGround(200, 475)
	, isJumping(false)
	, currentY(currentLane)
	, currentLane(LANE_2)
{

	//Start the animation on creation
	this->Play();
	//Make it loop
	this->SetIsLooping(true);	

	this->SetPosition(PLAYER_OFFSET, currentLane);
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
			//if (this->GetCurrentY() < LANE_2)
			//{
			//	this->SetPosition(PLAYER_OFFSET, LANE_1);
			//}
			//else if (this->GetCurrentY() > LANE_2 &&
			//	this->GetCurrentY() < LANE_3)
			//{
			//	this->SetPosition(PLAYER_OFFSET, LANE_2);
			//}
			//else if (this->GetCurrentY() > LANE_3 &&
			//	this->GetCurrentY() < LANE_4)
			//{
			//	this->SetPosition(PLAYER_OFFSET, LANE_3);
			//}
			//else if (this->GetCurrentY() > LANE_2 &&
			//	this->SetPosition(PLAYER_OFFSET, LANE_2);
			break;
		case ROLL:
			this->SetSrcPos(ROLL_START_SRC());
			this->SetNbFrame(ROLL_NO_FRAMES());
			this->SetFrameRate(ANIM_FAST_SPEED);
			break;
			// turn to go up 1 lane
		case LEFT:
			this->SetSrcPos(TURNL_START_SRC());
			this->SetNbFrame(TURNL_NO_FRAMES());
			if (this->GetCurrentLane() == LANE_4)
			{
				this->SetLane(LANE_3);
				this->SetPosition(PLAYER_OFFSET, LANE_3);
			}
			else if (this->GetCurrentLane() == LANE_3)
			{
				this->SetLane(LANE_2);
				this->SetPosition(PLAYER_OFFSET, LANE_2);
			}
			else if (this->GetCurrentLane() == LANE_2)
			{
				this->SetLane(LANE_1);
				this->SetPosition(PLAYER_OFFSET, LANE_1);
			}
			break;
			// turn to go down 1 lane
		case RIGHT:
			this->SetSrcPos(TURNR_START_SRC());
			this->SetNbFrame(TURNR_NO_FRAMES());

			/* use delta time here to have movement variation
			*/

			if (this->GetCurrentLane() == LANE_1)
			{
				this->SetLane(LANE_2);
				this->SetPosition(PLAYER_OFFSET, LANE_2);
			}
			else if (this->GetCurrentLane() == LANE_2)
			{
				this->SetLane(LANE_3);
				this->SetPosition(PLAYER_OFFSET, LANE_3);
			}
			else if (this->GetCurrentLane() == LANE_3)
			{
				this->SetLane(LANE_4);
				this->SetPosition(PLAYER_OFFSET, LANE_4);
			}
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
	//float dt = Engine::GetInstance()->GetTimer()->GetDeltaTime();

	//Move(dt);

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
	if (BUTTON->IsKeyPressed(SDL_SCANCODE_1)){
		actionState(DRIVE);
	}
	//Press 2 for Rolling
	if (BUTTON->IsKeyPressed(SDL_SCANCODE_2)){
		actionState(ROLL);
	}
	//Press 3 for TurnLeft
	if (BUTTON->IsKeyPressed(SDL_SCANCODE_UP)){
		actionState(LEFT);
	}
	//Press 3 for TurnRight
	if (BUTTON->IsKeyPressed(SDL_SCANCODE_DOWN)){
		actionState(RIGHT);
	}
	//Button release for all non-incremental actions
	if (BUTTON->IsKeyReleased(SDL_SCANCODE_DOWN) ||
		BUTTON->IsKeyReleased(SDL_SCANCODE_UP)   ||
		BUTTON->IsKeyReleased(SDL_SCANCODE_J)      )
	{
		actionState(DRIVE);
	}
	if (BUTTON->IsKeyHeld(SDL_SCANCODE_LEFT) &&
		/*is on the ground*/	!isJumping)
	{
		//actionState()
	}
	if (BUTTON->IsKeyHeld(SDL_SCANCODE_RIGHT) &&
		/*is on the ground*/	!isJumping)
	{

	}
	if (BUTTON->IsKeyHeld(SDL_SCANCODE_LEFT) &&
		/*is in the air*/		 isJumping)
	{
		//actionState(JUMP);
	}
	if (BUTTON->IsKeyHeld(SDL_SCANCODE_RIGHT) &&
		/*is in the air*/		 isJumping)
	{
		//actionState(JUMP);
	}

}