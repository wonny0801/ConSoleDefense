#include "include.h"

Enemy::Enemy()
{
	x = 119;
	body = 'A';
	fColor = INTENSITY_RED;
	

	hp = 3.0f * pow(2,D_STAGE); // 배율 증가 
	damage = 0.2f * pow(2, D_STAGE);
	speed = 5.0f + D_STAGE;//적 유닛 점점 빨라짐
	range = 1 + (D_STAGE / 5);// 10스테당 사거리 증가
	attackSpeed = 10 + (D_STAGE / 3);//3스테당 공속증가
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
		GameMng::Getles()->player.money += 5 * D_STAGE * D_STAGE;
		GameMng::Getles()->player.upgradePoint += 100 * D_STAGE * D_STAGE;
	}
}


