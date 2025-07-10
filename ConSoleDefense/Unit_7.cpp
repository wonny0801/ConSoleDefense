#include "include.h"

U7::U7()
{
	fColor = INTENSITY_WHITE;
	body = '7';

	hp = 700.0f * pow(1.05f, GameMng::Getles()->player.lv[7]);
	damage = 50.0f * pow(1.05f, GameMng::Getles()->player.lv[7]);
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
