#include "include.h"

U1::U1()
{
	fColor = WHITE;
	body = '1';

	hp = 10.0f * pow(1.1f, GameMng::Getles()->player.lv[1]);
	damage = 3.0f * pow(1.1f, GameMng::Getles()->player.lv[1]);
	speed = 50.0f;
	range = 3;
	attackSpeed = 10;
	isAlive = false;
}

U1::~U1()
{
}

void U1::Update(std::vector<Unit*> target)
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

//void U1::Update()
//{
//	if(canMove)
//		Move();
//	Attack();
//	Clipping();
//}

//void U1::Move()
//{
//	if (movetime < GetTickCount())
//	{
//		movetime = GetTickCount() + (1000 / speed);
//		x++;
//	}
//}
