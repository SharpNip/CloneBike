#include "Motorist.h"
#include "Libraries.h"

Motorist::Motorist()
	: Animation(Texture::ID::Motorist, IDLE_NO_FRAMES(), ANIM_FAST_SPEED, IDLE_START_SRC(), FRAME_SIZE())
	, currentAction(IDLE)
	, jumpHeight(0)
	, ON_GROUND(475)
	, speed(0)
	, isJumping(false)
	, isCrashed(false)
	, isMoving(false)
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
		case IDLE:
			this->SetSrcPos(IDLE_START_SRC());
			this->SetNbFrame(IDLE_NO_FRAMES());
			break;
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
	float dt = Engine::GetInstance()->GetTimer()->GetDeltaTime();


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

	//if (BUTTON->IsKeyHeld(SDL_SCANCODE_LEFT) &&
	//	/*is on the ground*/	!isJumping)
	//{
	//	//actionState()
	//}
	//if (BUTTON->IsKeyHeld(SDL_SCANCODE_RIGHT) &&
	//	/*is on the ground*/	!isJumping)
	//{
	//
	//}
	//if (BUTTON->IsKeyHeld(SDL_SCANCODE_LEFT) &&
	//	/*is in the air*/		 isJumping)
	//{
	//	//actionState(JUMP);
	//}
	//if (BUTTON->IsKeyHeld(SDL_SCANCODE_RIGHT) &&
	//	/*is in the air*/		 isJumping)
	//{
	//	//actionState(JUMP);
	//}


	//Press j for Drive
	if (BUTTON->IsKeyHeld(SDL_SCANCODE_J)){
		isMoving = true;
	}
	
	//
	////Press 2 for Rolling
	//if (BUTTON->IsKeyPressed(SDL_SCANCODE_2)){
	//	actionState(ROLL);
	//}
	////Press 3 for TurnLeft
	//if (BUTTON->IsKeyPressed(SDL_SCANCODE_UP)){
	//	actionState(LEFT);
	//}
	////Press 3 for TurnRight
	//if (BUTTON->IsKeyPressed(SDL_SCANCODE_DOWN)){
	//	actionState(RIGHT);
	//}
	//Button release for all non-incremental actions
	if (BUTTON->IsKeyReleased(SDL_SCANCODE_DOWN) ||
		BUTTON->IsKeyReleased(SDL_SCANCODE_UP) ||
		BUTTON->IsKeyReleased(SDL_SCANCODE_J))
	{
		isMoving = false;
	}
	
	
	
	if (isMoving)
	{
		if (speed < BASESPEED ||
			speed <= 0)
		{
			speed += 30 * dt;
			if (BUTTON->IsKeyHeld(SDL_SCANCODE_UP))
			{
				actionState(LEFT);
			}
			else if (BUTTON->IsKeyHeld(SDL_SCANCODE_DOWN))
			{
				actionState(RIGHT);
			}
			else
			{
				actionState(DRIVE);
			}
		}
	}
	
	
	
	
	
	if(isMoving == false)
	{
		if (speed > 0)
		{
			speed -= 60 * dt;
		}
		if (speed <= 0)
		{
			actionState(IDLE);
		}
	}

	

}