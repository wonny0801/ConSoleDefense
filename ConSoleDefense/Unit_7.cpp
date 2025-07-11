#include "include.h"

U7::U7()
{
	fColor = INTENSITY_WHITE;
	body = '7';

	hp = 3000.0f * (0.8f + (GameMng::Getles()->player.lv[7] * 0.2f));
	damage = 500.0f * (0.8f + (GameMng::Getles()->player.lv[7] * 0.2f));
	speed = 50.0f;
	range = 3;
	attackSpeed = 50;
	isAlive = false;
}

U7::~U7()
{
}

void U7::Update(std::vector<Unit*> target)
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
