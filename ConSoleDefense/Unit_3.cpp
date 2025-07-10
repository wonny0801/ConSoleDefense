#include "include.h"

U3::U3()
{
	fColor = GREEN;
	body = '3';

	hp = 50.0f * pow(1.05f, GameMng::Getles()->player.lv[3]);
	damage = 20.0f * pow(1.05f, GameMng::Getles()->player.lv[3]);
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
