#include "include.h"

U2::U2()
{
	fColor = INTENSITY_BLUE;
	body = '2';

	hp = 100.0f * pow(1.05f, GameMng::Getles()->player.lv[2]);
	damage = 0.3f * pow(1.05f, GameMng::Getles()->player.lv[2]);
	speed = 20.0f;
	range = 1;
	attackSpeed = 3;
	isAlive = false;
}

U2::~U2()
{
}

//void U2::Move()
//{
//}
