#include "Motorist.h"
#include "Libraries.h"

Motorist::Motorist()
	: Animation(Texture::ID::Motorist, IDLE_NO_FRAMES(), ANIM_FAST_SPEED, IDLE_START_SRC(), FRAME_SIZE())
	, currentAction(IDLE)
	, jumpHeight(0)
	, ON_GROUND(475)
	, angle(0)
	, isJumping(false)
	, isCrashed(false)
	, isMoving(false)
	, isFalling(false)
	, currentY(currentLane)
	, currentLane(LANE_2)
	, waiting(0)
	, regSpeed(0)
	, crashedSpeed(200)
	, mBG(nullptr)
	, mHud(nullptr)
	, mObs(nullptr)
{	
}
Motorist::Motorist(Obstalces* obstacles, HudOverlay* hud, Background* backGround)
	: Animation(Texture::ID::Motorist, IDLE_NO_FRAMES(), ANIM_FAST_SPEED, IDLE_START_SRC(), FRAME_SIZE())
	, currentAction(IDLE)
	, jumpHeight(0)
	, ON_GROUND(475)
	, angle(0)
	, isJumping(false)
	, isCrashed(false)
	, isMoving(false)
	, isFalling(false)
	, currentY(currentLane)
	, currentLane(LANE_2)
	, waiting(0)
	, regSpeed(0)
	, crashedSpeed(200)
	, mBG(nullptr)
	, mHud(nullptr)
	, mObs(nullptr)
{
	this->Play();
	this->SetIsLooping(true);
	this->SetPosition(PLAYER_OFFSET, currentLane);
	mObs = obstacles;
	mHud = hud;
	mBG = backGround;

}
Motorist::~Motorist()
{
	delete mObs;
	delete mHud;
	delete mBG;
	mObs = nullptr;
	mHud = nullptr;
	mBG  = nullptr;
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
			break;
		case ROLL:
			this->SetSrcPos(ROLL_START_SRC());
			this->SetNbFrame(ROLL_NO_FRAMES());
			this->SetFrameRate(ANIM_FAST_SPEED);
			AudioSys->PlaySound(Sounds->Get(Sound::ID::Rolling));
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
			
		case RIGHT:
			this->SetSrcPos(TURNR_START_SRC());
			this->SetNbFrame(TURNR_NO_FRAMES());
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
		case JUMP:
			AudioSys->PlaySound(Sounds->Get(Sound::ID::Jump));
			this->SetRotation(-50);
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
	
	//Press j for Drive
	if (!isCrashed)
	{
		if (BUTTON->IsKeyHeld(SDL_SCANCODE_J))
		{
			this->Move();
			if (regSpeed < BASESPEED)
			{
				regSpeed += dt * 120;
			}
		}
	}	
	if (BUTTON->IsKeyReleased(SDL_SCANCODE_DOWN) ||
		BUTTON->IsKeyReleased(SDL_SCANCODE_UP) ||
		BUTTON->IsKeyReleased(SDL_SCANCODE_J))	
	{
		isMoving = false;	
	}	
	if (isMoving &&
		!isCrashed)	{
		if (BUTTON->IsKeyHeld(SDL_SCANCODE_LEFT))
		{
			angle -= 30 * dt;
			this->SetRotation(angle);

			if (angle < -70)
			{
				isCrashed = true;
			}
		}
		else
		{
			this->SetRotation(0);
			angle = 0;
		}
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
	
	if(isMoving == false &&	!isCrashed)	
	{
		actionState(IDLE);
		this->SetRotation(0);
		angle = 0;
		regSpeed = 0;
	}
	if (isCrashed)	
	{
		angle = 0;
		this->SetRotation(angle);
		actionState(ROLL);
		waiting += dt;
		regSpeed = 0;
		mObs->Move(crashedSpeed);
		mBG->Move(crashedSpeed);

		if (waiting >= 3)
		{
			isCrashed = false;
			waiting = 0;
			actionState(IDLE);
		}
	}
	if (mObs->GetX() == PLAYER_OFFSET)
	{
		isJumping = true;
	}

	if (isJumping)
	{
		if (this->currentY > MAX_JUMP)
		{
			this->currentY += (int)regSpeed;
		}
	}

}
void Motorist::Move()
{
	isMoving = true;
	mObs->Move((int)regSpeed);
	mBG->Move((int)regSpeed);
}