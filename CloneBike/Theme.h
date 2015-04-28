#pragma once
#include "Libraries.h"
///////////////////////////////////////////////////
// Container class of the Title Screen's theme song
///////////////////////////////////////////////////
class Theme :
	public Component
{
public:
	Theme();
	~Theme();
	// Starts the song upon being summoned
	void Start();
	// Stops the music once the title screen is dismissed 
	void Stop();
	
};

