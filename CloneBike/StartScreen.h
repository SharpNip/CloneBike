#pragma once

#include "Common.h"
#include "Sprite.h"
#include "Libraries.h"

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

