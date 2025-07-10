#include "include.h"

U4::U4()
{
	fColor = INTENSITY_MAGENTA;
	body = '4';

	hp = 100.0f * pow(1.13f, GameMng::Getles()->player.lv[4]);
	damage = 30.0f * pow(1.13f, GameMng::Getles()->player.lv[4]);
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
