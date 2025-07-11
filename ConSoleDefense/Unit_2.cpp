#include "include.h"

U2::U2()
{
	fColor = INTENSITY_BLUE;
	body = '2';

	hp = 200.0f * (0.8f + (GameMng::Getles()->player.lv[2] * 0.2f));
	damage = 0.3f * (0.8f + (GameMng::Getles()->player.lv[2] * 0.2f));
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
