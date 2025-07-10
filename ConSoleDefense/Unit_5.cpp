#include "include.h"

U5::U5()
{
	fColor = INTENSITY_WHITE;
	body = '5';

	hp = 10.0f * pow(1.05f, GameMng::Getles()->player.lv[5]);
	damage = 500.0f * pow(1.05f, GameMng::Getles()->player.lv[5]);
	speed = 200.0f;
	range = 10;
	attackSpeed = 10000;
	isAlive = false;
}

U5::~U5()
{
}
