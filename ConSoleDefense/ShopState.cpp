#include "include.h"

ShopState::ShopState()
{
}

ShopState::~ShopState()
{
}

void ShopState::Start()
{
}

void ShopState::Update()
{
	static bool prevEsc = false;
	bool currEsc = (GetAsyncKeyState(VK_ESCAPE) & 0x8000) != 0;

	if (currEsc && !prevEsc) // 이번 프레임에 처음 눌렸을 때만
	{
		GameMng::Getles()->cstateCtrl.StateChange(E_MENU);
	}
	prevEsc = currEsc;
}

void ShopState::Draw()
{
	shopBoard.Draw();
	DrawStr(50, 22, "Next Round : press 'R'", INTENSITY_WHITE, BLACK);
	DrawStr(80, 3, "(Unit 1) Upgrede : press 1 / 100p", INTENSITY_WHITE, BLACK);
	DrawStr(80, 5, "(Unit 2) Upgrede : press 2 / 500p", INTENSITY_WHITE, BLACK);
	DrawStr(80, 7, "(Unit 3) Upgrede : press 3 / 1000p", INTENSITY_WHITE, BLACK);
	DrawStr(80, 9, "(Unit 4) Upgrede : press 4 / 3000p", INTENSITY_WHITE, BLACK);
	DrawStr(80, 11, "(Unit 5) Upgrede : press 5 / 5000p", INTENSITY_WHITE, BLACK);
	DrawStr(80, 13, "(Unit 6) Upgrede : press 6 / 7000p", INTENSITY_WHITE, BLACK);
	DrawStr(80, 15, "(Unit 7) Upgrede : press 7 / 12000p", INTENSITY_WHITE, BLACK);
	DrawStr(80, 17, "(Unit 8) Upgrede : press 8 / 20000p", INTENSITY_WHITE, BLACK);
	DrawStr(80, 19, "(Unit 9) Upgrede : press 9 / 40000p", INTENSITY_WHITE, BLACK);
	DrawStr(80, 21, "(Unit 0) Upgrede : press 0 / 100000p", INTENSITY_WHITE, BLACK);
	DrawStr(3, 2, ("Upgrade Point : " +
		std::to_string(GameMng::Getles()->player.upgradePoint)).c_str(),
		INTENSITY_WHITE, BLACK);
}

void ShopState::Exit()
{
}
