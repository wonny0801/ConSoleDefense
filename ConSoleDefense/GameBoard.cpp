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
	/*DrawChar(5, 26, '1', WHITE, BLACK);
	DrawStr(2, 27, ("LV : " + std::to_string(GameMng::Getles()->player.lv_1)).c_str(),
		WHITE, BLACK);
	DrawStr(4, 29, "10$", WHITE, BLACK);*/


}

void GameBoard::DrawUnit(int x, const char body, const int money)
{
	DrawChar((x - 1) * 12 + 5, 26, body, WHITE, BLACK);
	DrawStr((x - 1) * 12 + 4, 29, (std::to_string(money) + "$").c_str(),
		WHITE, BLACK);
	switch (x)
	{
	case 1:
		DrawStr((x - 1) * 12 + 2, 27, 
			("LV : " + std::to_string(GameMng::Getles()->player.lv_1)).c_str(),
			WHITE, BLACK);;
		break;
	case 2:
		DrawStr((x - 1) * 12 + 2, 27,
			("LV : " + std::to_string(GameMng::Getles()->player.lv_2)).c_str(),
			WHITE, BLACK);
		break;
	case 3:
		DrawStr((x - 1) * 12 + 2, 27, 
			("LV : " + std::to_string(GameMng::Getles()->player.lv_3)).c_str(),
			WHITE, BLACK);
		break;
	case 4:
		DrawStr((x - 1) * 12 + 2, 27,
			("LV : " + std::to_string(GameMng::Getles()->player.lv_4)).c_str(),
			WHITE, BLACK);
		break;
	case 5:
		DrawStr((x - 1) * 12 + 2, 27,
			("LV : " + std::to_string(GameMng::Getles()->player.lv_5)).c_str(),
			WHITE, BLACK);
		break;
	case 6:
		DrawStr((x - 1) * 12 + 2, 27,
			("LV : " + std::to_string(GameMng::Getles()->player.lv_6)).c_str(),
			WHITE, BLACK);
		break;
	case 7:
		DrawStr((x - 1) * 12 + 2, 27,
			("LV : " + std::to_string(GameMng::Getles()->player.lv_7)).c_str(),
			WHITE, BLACK);
		break;
	case 8:
		DrawStr((x - 1) * 12 + 2, 27,
			("LV : " + std::to_string(GameMng::Getles()->player.lv_8)).c_str(),
			WHITE, BLACK);
		break;
	case 9:
		DrawStr((x - 1) * 12 + 2, 27,
			("LV : " + std::to_string(GameMng::Getles()->player.lv_9)).c_str(),
			WHITE, BLACK);
		break;
	case 10:
		DrawStr((x - 1) * 12 + 2, 27,
			("LV : " + std::to_string(GameMng::Getles()->player.lv_0)).c_str(),
			WHITE, BLACK);
		break;
	}
}
