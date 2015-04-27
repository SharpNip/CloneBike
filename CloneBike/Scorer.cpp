#include "Scorer.h"
#include "Libraries.h"

Scorer::Scorer()
	:Text("0:00:00", Font::ID::Derp, 700)
	, launch(false)
	, mm(0)
	, sec(0)
	, dec(0.0f)
{
	this->SetColor(Color::WHITE);
	this->SetPosition(560, 650);
}

Scorer::~Scorer()
{
}

void Scorer::Start()
{
	
}

void Scorer::Update()
{
	Text::Update();

	if (launch)
	{
		float dt = Engine::GetInstance()->GetTimer()->GetGameTime();

		dec = dt;

		if (dec > 1.0f)
		{
			dec = 0;
		}
		sec = dt;
		mm = sec / 60;
		UpdateTimer(mm, sec, dec);

	}
}

void Scorer::Stop()
{
}

void Scorer::UpdateTimer(int min, int ss, float dd)
{
	this->SetText(std::to_string(mm) + ':' + std::to_string(sec) + ':' + std::to_string(dec));
}
