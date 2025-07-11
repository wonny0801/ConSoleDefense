#include "include.h"

EnemyBoss::EnemyBoss()
{
	x = 119;
	body = 'R';
	fColor = RED;


	hp = 100.0f * D_STAGE * (D_STAGE / 5 + 1); // 배율 증가 
	damage = 30.0f * D_STAGE * (D_STAGE / 5 + 1);
	speed = 0.3f ;
	range = 10;// 10스테당 사거리 증가
	attackSpeed = 1 ;
	isAlive = false;
	level = 1;
}

EnemyBoss::~EnemyBoss()
{
}

void EnemyBoss::Update(std::vector<Unit*> target)
{
	if (isAlive)
	{
		if (canMove)
			Move();

		Clipping();
		AreaAttack(target);
		death();
	}
}

void EnemyBoss::Move()
{
	if (movetime < GetTickCount())
	{
		movetime = GetTickCount() + (2000 / speed);
		x--;
	}
}

void EnemyBoss::death()
{
	if (hp <= 0 && isAlive)
	{
		Disable();
		deathTime = GetTickCount();
		GameMng::Getles()->player.money += 5000 * D_STAGE;
		GameMng::Getles()->player.upgradePoint += 50000 * D_STAGE;
	}
}
