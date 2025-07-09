#include "include.h"

MyCastle::MyCastle()
{
	x = 0;
	y = 22;
	body = ' ';
	fColor = WHITE;
	bColor = BLACK;
	isAlive = true;
	canMove = false;

	hp = GameMng::Getles()->player.castleHp;
	damage = 0;
	level = 1;
}

MyCastle::~MyCastle()
{
}

void MyCastle::Init()
{
}

void MyCastle::Update()
{
	
}

void MyCastle::Draw()
{
	if (isAlive)
	{
		for (int i = 0; i < 7; i++)
		{
			DrawChar(0, 17 + i, ' ', RED, RED);
		}

		DrawStr(3, 14, "HP", INTENSITY_WHITE, BLACK);
		DrawStr(3, 15, std::to_string((int)hp).c_str(), INTENSITY_WHITE, BLACK);
	}
}

void MyCastle::Move()
{
}

void MyCastle::Upgrade()
{
	level++;
	hp = 100 * level;
}
