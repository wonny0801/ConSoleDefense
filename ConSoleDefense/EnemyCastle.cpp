#include "include.h"

EnemyCastle::EnemyCastle()
{
	x = 119;
	y = 22;
	body = ' ';
	fColor = WHITE;
	bColor = BLACK;
	isAlive = true;
	canMove = false;

	hp = 500;
	damage = 0;
	level = 1;
	
	
	
}

EnemyCastle::~EnemyCastle()
{
}

void EnemyCastle::Init()
{
}

void EnemyCastle::Update()
{
   
}

void EnemyCastle::Draw()
{
    if(isAlive)
    {
        for (int i = 0; i < 7; i++)
        {
            DrawChar(119, 17 + i, ' ', RED, RED);
        }
        
        DrawStr(114, 14, "HP", INTENSITY_WHITE, BLACK);
        DrawStr(114, 15, std::to_string((int)hp).c_str(), INTENSITY_WHITE, BLACK);
    }
}

void EnemyCastle::Move()
{
}

void EnemyCastle::Upgrade()
{
	level++;
	hp = 500 * level;
}
