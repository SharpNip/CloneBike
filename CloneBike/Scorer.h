#pragma once
#include "Text.h"
#include "Libraries.h"

////////////////////////////////////////////////////////////////////////////////
// Scorer is the class that takes care of displaying the timer in the bottom HUD
////////////////////////////////////////////////////////////////////////////////
class Scorer :
	public Text
{
public:
	Scorer();
	~Scorer();
	// Starts the timer, Timer is reset to exclude the timer spent in title screen
	void Start();
	// Updates the timer with current game time
	void Update();
	// Stops the timer
	void Stop();
	// Updates the timer with the corresponding min, secs, and decimals
	// Division in 3 different entities was required
	void UpdateTimer(int min, int ss, int dd);
	// Setting boolean to validate that the timer can start
	void SetLaunch(bool okay){ launch = okay; }

private:
	bool launch;
	int mm, sec, dec;
};

