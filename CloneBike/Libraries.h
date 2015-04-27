#pragma once
#include "Engine.h"
#include "Sprite.h"
#include "Text.h"
#include "Audio.h"
#include "ResourceIDs.h"
#include "Animation.h"



#ifndef BASE_SPEED
#define BASESPEED 450
#endif 

#ifndef PLAYER_OFFSET 
#define PLAYER_OFFSET 150
#endif

#ifndef MAX_JUMP 
#define MAX_JUMP 150
#endif 


#ifndef HUD_POS
#define HUD_POS 600
#endif


#ifndef LEVEL_OFFSET 
#define LEVEL_OFFSET 400
#endif

#ifndef LANE_1
#define LANE_1 380
#endif

#ifndef LANE_2
#define LANE_2 410
#endif

#ifndef LANE_3
#define LANE_3 440
#endif

#ifndef LANE_4
#define LANE_4 470
#endif

#ifndef BUTTON
#define BUTTON Engine::GetInstance()->GetInput()
#endif

#ifndef BUTTON_START
#define BUTTON_START Engine::GetInstance()->GetInput()->IsKeyPressed(SDL_SCANCODE_G)
#endif