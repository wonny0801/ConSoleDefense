#include "include.h"

U5::U5()
{
	fColor = INTENSITY_WHITE;
	body = '5';

	hp = 10.0f * (0.8f + (GameMng::Getles()->player.lv[5] * 0.2f));
	damage = 500.0f * (0.8f + (GameMng::Getles()->player.lv[5] * 0.2f));
	speed = 200.0f;
	range = 10;
	attackSpeed = 0.001;
	isAlive = false;
}

U5::~U5()
{
}
