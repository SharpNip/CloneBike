#pragma once
#include "Text.h"
#include "Libraries.h"

class Scorer :
	public Text
{
public:
	Scorer();
	~Scorer();

	void Start();
	void Update();
	void Stop();
	void UpdateTimer(int min, int ss, float dd);
	void SetLaunch(bool okay){ launch = okay; }

private:
	bool launch;
	int mm, sec, dec;

};

