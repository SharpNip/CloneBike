#pragma once
#include "Engine.h"
#include "Sprite.h"
#include "Text.h"
#include "Audio.h"
#include "Jump1.h"
#include "Jump2.h"
#include "Jump3.h"
#include "Jump4.h"
#include "Jump5.h"
#include "Jump6.h"
#include "Jump7.h"
#include "ResourceIDs.h"

#ifndef BASESPEED
#define BASESPEED 5
#endif 

#ifndef PLAYER_OFFSET 
#define PLAYER_OFFSET 200
#endif

#ifndef LANE_1
#define LANE_1 400
#endif

#ifndef LANE_2
#define LANE_2 433
#endif

#ifndef LANE_3
#define LANE_3 466
#endif

#ifndef LANE_4
#define LANE_4 500
#endif

#ifndef BUTTON
#define BUTTON Engine::GetInstance()->GetInput()
#endif