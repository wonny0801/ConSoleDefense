#include "include.h"

U8::U8()
{
	fColor = WHITE;
	body = '8';

	hp = 100000.0f * (0.8f + (GameMng::Getles()->player.lv[8] * 0.2f));
	damage = 3000.0f * (0.8f + (GameMng::Getles()->player.lv[8] * 0.2f));
	speed = 30.0f;
	range = 2;
	attackSpeed = 2;
	isAlive = false;
}

U8::~U8()
{
}
