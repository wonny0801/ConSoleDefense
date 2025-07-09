#include "include.h"

Enemy::Enemy()
{
	x = 119;
	body = 'A';
	fColor = RED;
	

	hp = 10.0f * D_STAGE * D_STAGE; //�������� ������ŭ ���� ����
	damage = 0.5f * D_STAGE * D_STAGE;
	speed = 5.0f + D_STAGE;//�� ���� ���� ������
	range = 1 + (D_STAGE / 10);// 10���״� ��Ÿ� ����
	attackSpeed = 10 + (D_STAGE / 3);//3���״� ��������
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


