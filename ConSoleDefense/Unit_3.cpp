#include "include.h"

U3::U3()
{
	fColor = GREEN;
	body = '3';

	hp = 100.0f * (0.8f + (GameMng::Getles()->player.lv[3] * 0.2f));
	damage = 20.0f * (0.8f + (GameMng::Getles()->player.lv[3] * 0.2f));
	speed = 50.0f;
	range = 2;
	attackSpeed = 15;
	isAlive = false;
}

U3::~U3()
{
}

void U3::Update(std::vector<Unit*> target)
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
