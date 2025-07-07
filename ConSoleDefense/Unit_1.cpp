#include "include.h"

U1::U1()
{
	fColor = WHITE;
	body = '1';

	hp = 10.0f * (GameMng::Getles()->player.lv_1 * 0.3 + 1.0);
	damage = 10.0f * (GameMng::Getles()->player.lv_1 * 0.3 + 1.0);
	speed = 3.0f;
	range = 1;
	attackSpeed = 1;
	isAlive = false;
}

U1::~U1()
{
}

//void U1::Update()
//{
//	if(canMove)
//		Move();
//	Attack();
//	Clipping();
//}

void U1::Move()
{
	if (movetime < GetTickCount())
	{
		movetime = GetTickCount() + (1000 / speed);
		x++;
	}
}
