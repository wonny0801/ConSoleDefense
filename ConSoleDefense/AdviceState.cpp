#include "include.h"

AdviceState::AdviceState()
{
	GameMng::Getles()->player.AdviceNumber = 0;
}

AdviceState::~AdviceState()
{
}

void AdviceState::Start()
{
}

void AdviceState::Update()
{
	static bool prevRight = false;
	bool currRight = (GetAsyncKeyState(VK_RIGHT) & 0x8000) != 0;
	if (currRight && !prevRight) // 이번 프레임에 처음 눌렸을 때만
	{
		if(GameMng::Getles()->player.AdviceNumber == 0)
			GameMng::Getles()->player.AdviceNumber++;
	}
	prevRight = currRight;
	//============================================================
	static bool prevLeft = false;
	bool currLeft = (GetAsyncKeyState(VK_LEFT) & 0x8000) != 0;
	if (currLeft && !prevLeft) // 이번 프레임에 처음 눌렸을 때만
	{
		if (GameMng::Getles()->player.AdviceNumber == 1)
			GameMng::Getles()->player.AdviceNumber--;
	}
	prevLeft = currLeft;
	//--------------------------------------------------------------]
	static bool prevF5 = false;
	bool currF5 = (GetAsyncKeyState(VK_F5) & 0x8000) != 0;
	if (currF5 && !prevF5) // 이번 프레임에 처음 눌렸을 때만
	{
		if (GameMng::Getles()->player.AdviceNumber == 1)
		{
			GameMng::Getles()->cstateCtrl.StateChange(new ShopState);
		}
			
	}
	prevF5 = currF5;


	Clipping();
}

void AdviceState::Draw()
{
	if (GameMng::Getles()->player.AdviceNumber == 0)
	{
		DrawUniCode(3, 2, D_ADVICE_0_1, WHITE, BLACK);
		DrawUniCode(3, 4, D_ADVICE_0_2, WHITE, BLACK);
		DrawUniCode(3, 6, D_ADVICE_0_3, WHITE, BLACK);
		DrawUniCode(3, 8, D_ADVICE_0_4, WHITE, BLACK);
		DrawUniCode(3, 10, D_ADVICE_0_5, WHITE, BLACK);
		DrawUniCode(100, 23, L"-> 다음", WHITE, BLACK);
	}
	if (GameMng::Getles()->player.AdviceNumber == 1)
	{
		DrawUniCode(3, 2, D_ADVICE_1_0, INTENSITY_WHITE, BLACK); 
		DrawUniCode(3, 4, D_ADVICE_1_1, INTENSITY_WHITE, BLACK); 
		DrawUniCode(3, 6, D_ADVICE_1_2, INTENSITY_WHITE, BLACK); 
		DrawUniCode(3, 8, D_ADVICE_1_3, INTENSITY_WHITE, BLACK); 
		DrawUniCode(3, 10, D_ADVICE_1_4, INTENSITY_WHITE, BLACK); 
		DrawUniCode(3, 12, D_ADVICE_1_5, INTENSITY_WHITE, BLACK); 
		DrawUniCode(3, 14, D_ADVICE_1_6, INTENSITY_WHITE, BLACK); 
		DrawUniCode(3, 16, D_ADVICE_1_7, INTENSITY_WHITE, BLACK); 
		DrawUniCode(3, 18, D_ADVICE_1_8, INTENSITY_WHITE, BLACK); 
		DrawUniCode(3, 20, D_ADVICE_1_9, INTENSITY_WHITE, BLACK); 
		DrawUniCode(3, 22, D_ADVICE_1_10,INTENSITY_WHITE, BLACK); 
		DrawUniCode(100, 23, L"이전 : <- ", WHITE, BLACK);
		DrawUniCode(100, 25, L"F5 : 게임 시작!!", WHITE, BLACK);
	}				  
}

void AdviceState::Exit()
{
}

void AdviceState::Clipping()
{
	if (GameMng::Getles()->player.AdviceNumber < 0)
		GameMng::Getles()->player.AdviceNumber = 0;
	if (GameMng::Getles()->player.AdviceNumber > 1)
		GameMng::Getles()->player.AdviceNumber = 1;
}
