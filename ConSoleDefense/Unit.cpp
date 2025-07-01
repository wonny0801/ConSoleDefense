#include "include.h"

Unit::Unit()
{
	x = 0;
	y = 0;
	body = ' ';
	fColor = WHITE;
	bColor = BLACK;
	isAlive = false;

	hp = 1;
	damage = 1;
	speed = 1;
	level = 1;
	movetime = GetTickCount();
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

void Unit::Clipping()
{
	if (x > 119)
		x = 119;
	if (x < 0)
		x = 0;
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
