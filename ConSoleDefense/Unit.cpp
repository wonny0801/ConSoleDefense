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
	deathTime = 0;
}

Unit::~Unit()
{
}

void Unit::Init()
{
}

void Unit::Update(std::vector<Unit*> target)
{
	if (isAlive)
	{
		if(canMove)
				Move();
		
		Clipping();
		for (int i = 0; i < target.size(); i++)
		{
			if (target[i]->isAlive && abs(this->x - target[i]->x) <= this->range)
			{
				Attack(target[i]);
				break;
			}
		}
		death();
	}
	
}

void Unit::Draw()
{
	if(isAlive)
		DrawChar(x, y, body, fColor, bColor);
	else if (deathTime != 0 && GetTickCount() - deathTime < 2000)
	{
		DrawUniCode(x, 17, L"\u2620  ", RED, RED);
	}
}

void Unit::Move()
{
	if (movetime < GetTickCount())
	{
		movetime = GetTickCount() + (1000 / speed);
		x++;
	}
}

void Unit::Upgrade()
{
	hp = hp * 1.1f;
	damage = damage * 1.1f;
	level++;
}

void Unit::Attack(Unit* target)
{
	if (!canMove)
	{
		if (movetime < GetTickCount())
		{
			movetime = GetTickCount() + (3000 / attackSpeed);
			y -=3;
			if (target && target->isAlive)
			{
				target->hp -= this->damage;
			}
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
	deathTime = 0;
}

void Unit::Disable()
{
	isAlive = false;
}

void Unit::death()
{
	if (hp <= 0 && isAlive)
	{
		Disable();
		deathTime = GetTickCount();
		
	}
}
