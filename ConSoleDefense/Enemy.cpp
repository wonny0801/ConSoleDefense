#include "include.h"

Enemy::Enemy()
{
	x = 119;
	body = 'A';
	fColor = RED;
	

	hp = 50.0f * GameMng::Getles()->gameboard.stage;
	damage = 3.0f * GameMng::Getles()->gameboard.stage;
	speed = 50.0f;
	range = 1;
	attackSpeed = 10;
	isAlive = false;
	level = 1;
	
}

Enemy::~Enemy()
{
}

//void Enemy::Update()
//{
//	if(canMove)
//		Move();
//	Attack();
//	Clipping();
//}

void Enemy::Move()
{
	if (movetime < GetTickCount())
	{
		movetime = GetTickCount() + (2000 / speed);
		x--;
	}
}

void Enemy::death()
{
	if (hp <= 0 && isAlive)
	{
		Disable();
		deathTime = GetTickCount();
		GameMng::Getles()->player.money += 25 * level;
		GameMng::Getles()->player.upgradePoint += 100 * level;
	}
}


