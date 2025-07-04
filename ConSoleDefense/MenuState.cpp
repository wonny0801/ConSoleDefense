#include "include.h"

MenuState::MenuState()
{

}

MenuState::~MenuState()
{
}

void MenuState::Start()
{
}

void MenuState::Update() // 메뉴화면에서 사용할 기능들 구현하기....
{
	static bool prevEsc = false;
	bool currEsc = (GetAsyncKeyState(VK_F5) & 0x8000) != 0;
	if (currEsc && !prevEsc) // 이번 프레임에 처음 눌렸을 때만
	{
		GameMng::Getles()->cstateCtrl.StateChange(E_GAME);
	}
	prevEsc = currEsc;

	static bool prevP = false;
	bool currP = (GetAsyncKeyState('P') & 0x8000) != 0;
	if (currP && !prevP) // 이번 프레임에 처음 눌렸을 때만
	{
		GameMng::Getles()->cstateCtrl.StateChange(E_SHOP);
	}
	prevP = currP;
}

void MenuState::Draw() // 메뉴화면 만들기...
{
	DrawStr(10, 10, "MenuState", WHITE, BLACK);
}

void MenuState::Exit()
{
}
