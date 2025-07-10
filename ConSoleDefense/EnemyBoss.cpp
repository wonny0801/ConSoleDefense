#include "include.h"

EnemyBoss::EnemyBoss()
{
	x = 119;
	body = 'R';
	fColor = RED;


	hp = 30.0f * pow(2, D_STAGE); // 배율 증가 
	damage = 20.0f * pow(2, D_STAGE);
	speed = 1.0f ;//적 유닛 점점 빨라짐
	range = 10 + (D_STAGE / 5);// 10스테당 사거리 증가
	attackSpeed = 1 ;//3스테당 공속증가
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
		GameMng::Getles()->player.money += 50000 * D_STAGE;
		GameMng::Getles()->player.upgradePoint += 10000 * D_STAGE * D_STAGE;
	}
}
