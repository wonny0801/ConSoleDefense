#include "include.h"

GameBoard::GameBoard()
{
	x = 0;
	y = 24;
	body = ' ';
	fColor = INTENSITY_WHITE; 
	bColor = INTENSITY_WHITE; 
	isAlive = true;
}

GameBoard::~GameBoard()
{
}

void GameBoard::Update()
{
}

void GameBoard::Draw()
{
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
	DrawChar(5, 26, '0', WHITE, BLACK);
	DrawStr(3, 27, ("LV : " + std::to_string(GameMng::Getles()->player.lv_0)).c_str(),
		WHITE, BLACK);
	DrawStr(4, 29, "50\\", WHITE, BLACK);


}
