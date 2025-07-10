#include "include.h"

U9::U9()
{
	fColor = INTENSITY_YELLOW;
	body = '9';

	hp = 5000.0f * pow(1.05f, GameMng::Getles()->player.lv[9]);
	damage = 800.0f * pow(1.05f, GameMng::Getles()->player.lv[9]);
	speed = 25.0f;
	range = 6;
	attackSpeed = 7;
	isAlive = false;
}

U9::~U9()
{
}

void U9::Update(std::vector<Unit*> target)
{
	if (isAlive)
	{
		if (canMove)
			Move();

		Clipping();
		AreaAttack(target);
		death();
	}
}
