#include "include.h"

EnemyBoss::EnemyBoss()
{
	x = 119;
	body = 'R';
	fColor = RED;


	hp = 30.0f * pow(2, D_STAGE); // ���� ���� 
	damage = 20.0f * pow(2, D_STAGE);
	speed = 1.0f ;//�� ���� ���� ������
	range = 10 + (D_STAGE / 5);// 10���״� ��Ÿ� ����
	attackSpeed = 1 ;//3���״� ��������
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
