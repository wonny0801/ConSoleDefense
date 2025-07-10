#include "include.h"

U8::U8()
{
	fColor = WHITE;
	body = '8';

	hp = 10000.0f * pow(1.4f, GameMng::Getles()->player.lv[8]);
	damage = 300.0f * pow(1.4f, GameMng::Getles()->player.lv[8]);
	speed = 30.0f;
	range = 2;
	attackSpeed = 100;
	isAlive = false;
}

U8::~U8()
{
}
