#include "include.h"

U1::U1()
{
	fColor = WHITE;
	body = '1';

	hp = 10.0f;
	damage = 3.0f;
	speed = 1.0f;
	isAlive = false;
}

U1::~U1()
{
}

void U1::Update()
{
	Move();
}

void U1::Move()
{
	if (movetime < GetTickCount())
	{
		movetime = GetTickCount() + (2000 / speed);
		x++;
	}
}
