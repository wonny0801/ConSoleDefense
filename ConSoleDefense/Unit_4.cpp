#include "include.h"

U4::U4()
{
	fColor = INTENSITY_MAGENTA;
	body = '4';

	hp = 100.0f * (0.8f + (GameMng::Getles()->player.lv[4] * 0.2f));
	damage = 30.0f * (0.8f + (GameMng::Getles()->player.lv[4] * 0.2f));
	speed = 50.0f;
	range = 3;
	attackSpeed = 5;
	isAlive = false;
}

U4::~U4()
{
}

void U4::Update(std::vector<Unit*> target)
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
