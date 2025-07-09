#include "include.h"

GameBoard::GameBoard()
{
	x = 0;
	y = 24;
	body = ' ';
	fColor = INTENSITY_WHITE; 
	bColor = INTENSITY_WHITE; 
	isAlive = true;
	stage = 1;
}

GameBoard::~GameBoard()
{
}

void GameBoard::Update()
{
}

void GameBoard::Draw()
{
	DrawStr(56, 5, ("STAGE : " + std::to_string(stage)).c_str(), WHITE, BLACK);
	for (int i = 0; i < 120; i++)
	{
		DrawChar(i, 24, body, fColor, bColor);
		if (i % 12 == 11)
		{
			if (i == 119)
				continue;
			for (int j = 1; j <= 5; j++)
			{
				DrawChar(i, 24 + j, body, fColor, bColor);
			}
		}
	}
	DrawUnit(1, '1', 10);
	DrawUnit(2, '2', 30);
	DrawUnit(3, '3', 150);
	DrawUnit(4, '4', 300);
	DrawUnit(5, '5', 500);
	DrawUnit(6, '6', 800);
	DrawUnit(7, '7', 1200);
	DrawUnit(8, '8', 1800);
	DrawUnit(9, '9', 2200);
	DrawUnit(10, '0', 3000);
}

void GameBoard::DrawUnit(int x, const char body, const int money)
{
	DrawChar((x - 1) * 12 + 5, 26, body, WHITE, BLACK);
	DrawStr((x - 1) * 12 + 4, 29, (std::to_string(money) + "$").c_str(),
		WHITE, BLACK);
	if (x == 10)
	{
		DrawStr((x - 1) * 12 + 2, 27,
			("LV : " + std::to_string(GameMng::Getles()->player.lv[0])).c_str(),
			WHITE, BLACK);
	}
	else
	{
		DrawStr((x - 1) * 12 + 2, 27,
			("LV : " + std::to_string(GameMng::Getles()->player.lv[x])).c_str(),
			WHITE, BLACK);
	}
	
}
