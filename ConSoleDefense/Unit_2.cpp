#include "include.h"

U2::U2()
{
	fColor = INTENSITY_BLUE;
	body = '2';

	hp = 100.0f * (GameMng::Getles()->player.lv_1 * 0.3 + 1.0);
	damage = 0.3f * (GameMng::Getles()->player.lv_1 * 0.3 + 1.0);
	speed = 1.5f;
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
