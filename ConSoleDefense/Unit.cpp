#include "include.h"

Unit::Unit()
{
	x = 0;
	y = 22;
	body = ' ';
	fColor = WHITE;
	bColor = BLACK;
	isAlive = false;
	canMove = true;

	hp = 1;
	damage = 1;
	speed = 1;
	level = 1;
	range = 1;
	attackSpeed = 1;
	movetime = GetTickCount();
	attackTime = GetTickCount();
}

Unit::~Unit()
{
}

void Unit::Init()
{
}

void Unit::Update()
{
	Move();
}

void Unit::Draw()
{
	if(isAlive)
		DrawChar(x, y, body, fColor, bColor);
}

void Unit::Move()
{
}

void Unit::Upgrade()
{
	hp = hp * 1.1f;
	damage = damage * 1.1f;
	level++;
}

void Unit::Attack()
{
	if (!canMove)
	{
		if (movetime < GetTickCount())
		{
			movetime = GetTickCount() + (1000 / attackSpeed);
			y -=3;
		}
	}
}

void Unit::Clipping()
{
	y++;
	if (x > 119)
		x = 119;
	if (x < 0)
		x = 0;
	if (y > 22)
		y = 22;
}

void Unit::Enable(int x, int y)
{
	this->x = x;
	this->y = y;
	isAlive = true;
}

void Unit::Disable()
{
	isAlive = false;
}
