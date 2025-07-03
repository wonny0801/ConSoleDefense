#include "include.h"

Enemy::Enemy()
{
	x = 119;
	body = 'A';
	fColor = RED;
	

	hp = 10.0f;
	damage = 0.5f;
	speed = 10.0f;
	range = 1;
	attackSpeed = 1;
	isAlive = false;
	
}

Enemy::~Enemy()
{
}

void Enemy::Update()
{
	if(canMove)
		Move();
	Attack();
	Clipping();
}

void Enemy::Move()
{
	if (movetime < GetTickCount())
	{
		movetime = GetTickCount() + (2000 / speed);
		x--;
	}
}


