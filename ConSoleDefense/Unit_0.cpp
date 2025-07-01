#include "include.h"

U0::U0()
{
	y = 22;
	fColor = WHITE;
	body = '0';

	hp = 10.0f;
	damage = 3.0f;
	speed = 1.0f;
	isAlive = true;
}

U0::~U0()
{
}

void U0::Update()
{
	Move();
}

void U0::Move()
{
	// 0.03√ ø° 1∆Ω.. 100∆Ω¿Ã∏È 3√ 
	if (movetime < GetTickCount())
	{
		movetime = GetTickCount() + (2000 / speed);
		x++;
	}
}
