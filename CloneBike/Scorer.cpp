#include "Scorer.h"
#include "Libraries.h"

Scorer::Scorer()
	: Text("0:00:00", Font::ID::Derp, 700)
	, launch(false)
	, mm(0)
	, sec(0)
	, dec(0)
{
	this->SetColor(Color::WHITE);
	this->SetPosition(560, 650);
}

Scorer::~Scorer()
{
}

void Scorer::Start()
{
	launch = true;
	Engine::GetInstance()->GetTimer()->Reset();
}

void Scorer::Update()
{
	Text::Update();

	if (launch)
	{
		float dt = Engine::GetInstance()->GetTimer()->GetGameTime();
		// Intentional, to "shave" off the decimals
		int temp = dt;
		float temp2 = dt;

		// Intentional, to remove excess numbers
		dec = (temp2 - temp) * 100;
		
		sec = (int)dt;
		mm = (int)dt / 60;
		
		if (sec > 59)
		{
			sec -= 60;
		}
		UpdateTimer(mm, sec, dec);
	}
}

void Scorer::Stop()
{
	launch = false;
}

void Scorer::UpdateTimer(int min, int ss, int dd)
{
	this->SetText(std::to_string(mm) + ':' + std::to_string(sec) + ':' + std::to_string(dec));
}
