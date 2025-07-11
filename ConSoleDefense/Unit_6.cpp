#include "include.h"

U6::U6()
{
	fColor = INTENSITY_GREEN;
	body = '6';

	hp = 500.0f * (0.8f + (GameMng::Getles()->player.lv[6] * 0.2f));
	damage = 100.0f * (0.8f + (GameMng::Getles()->player.lv[6] * 0.2f));
	speed = 15.0f;
	range = 8;
	attackSpeed = 5;
	isAlive = false;
}

U6::~U6()
{
}

void U6::Update(std::vector<Unit*> target)
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
