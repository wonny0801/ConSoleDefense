#include "include.h"

U6::U6()
{
	fColor = INTENSITY_GREEN;
	body = '6';

	hp = 1000.0f * (0.8f + (GameMng::Getles()->player.lv[6] * 0.2f));
	damage = 300.0f * (0.8f + (GameMng::Getles()->player.lv[6] * 0.2f));
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
