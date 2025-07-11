#include "include.h"

Enemy::Enemy()
{
	x = 119;
	body = 'A';
	fColor = INTENSITY_RED;
	

	hp = 20.0f * D_STAGE * (D_STAGE / 5 + 1); // ���� ���� 
	damage = 2.0f * D_STAGE * (D_STAGE / 5 + 1);
	speed = 5.0f;//�� ���� ���� ������
	range = 1 + (D_STAGE / 5);// 10���״� ��Ÿ� ����
	attackSpeed = 10 + (D_STAGE / 5);//5���״� ��������
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
		GameMng::Getles()->player.money += 10 * D_STAGE;
		GameMng::Getles()->player.upgradePoint += 1000 * D_STAGE;
	}
}


