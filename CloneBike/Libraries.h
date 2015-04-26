#pragma once
#include "Engine.h"
#include "Sprite.h"
#include "Text.h"
#include "Audio.h"
#include "ResourceIDs.h"

#include "Jump1.h"
#include "Jump2.h"
#include "Jump3.h"
#include "Jump4.h"
#include "Jump5.h"
#include "Jump6.h"
#include "Jump7.h"
#include "BotSpeeder.h"
#include "BasicG.h"
#include "Crowd.h"
#include "Ship.h"
#include "Motorist.h"
#include "Gameplay.h"
#include "HudOverlay.h"
#include "Background.h"


#ifndef BASE_SPEED
#define BASESPEED 300
#endif 

#ifndef SUPER_SPEED
#define SUPER_SPEED 50
#endif

#ifndef PLAYER_OFFSET 
#define PLAYER_OFFSET 150
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