#pragma once

#include "Common.h"
#include "Libraries.h"
#include "Theme.h"
#include "Scorer.h"

class StartScreen:
	public Sprite
{
public:
	StartScreen();
	~StartScreen();

	void Update();
	void Kill();
private:
	Theme* song;

};

