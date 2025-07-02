#include "include.h"

Enemy::Enemy()
{
	x = 119;
	body = 'A';
	fColor = RED;
	isAlive = false;
	
}

Enemy::~Enemy()
{
}

void Enemy::Update()
{
	Move();
}

void Enemy::Move()
{
	x--;
}


