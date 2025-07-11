#include "include.h"

U9::U9()
{
	fColor = INTENSITY_YELLOW;
	body = '9';

	hp = 50000.0f * (0.8f + (GameMng::Getles()->player.lv[9] * 0.2f));
	damage = 15000.0f * (0.8f + (GameMng::Getles()->player.lv[9] * 0.2f));
	speed = 25.0f;
	range = 6;
	attackSpeed = 8;
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
