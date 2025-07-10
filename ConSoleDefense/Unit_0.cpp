#include "include.h"

U0::U0()
{
	fColor = INTENSITY_CYAN;
	body = '0';

	hp = 50000.0f * pow(1.7f, GameMng::Getles()->player.lv[0]);
	damage = 3000.0f * pow(1.7f, GameMng::Getles()->player.lv[0]);
	speed = 10.0f;
	range = 15;
	attackSpeed = 3;
	isAlive = false;
}

U0::~U0()
{
}

void U0::Update(std::vector<Unit*> target)
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

//void U0::Update()
//{
//	Move();
//}


