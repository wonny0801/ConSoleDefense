#include "include.h"

U0::U0()
{
	fColor = INTENSITY_CYAN;
	body = '0';

	hp = 500000.0f * (0.8f + (GameMng::Getles()->player.lv[0] * 0.2f));
	damage = 100000.0f * (0.8f + (GameMng::Getles()->player.lv[0] * 0.2f));
	speed = 10.0f;
	range = 15;
	attackSpeed = 4;
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


