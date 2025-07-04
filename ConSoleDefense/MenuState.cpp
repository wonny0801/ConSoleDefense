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

void MenuState::Update() // �޴�ȭ�鿡�� ����� ��ɵ� �����ϱ�....
{
	static bool prevEsc = false;
	bool currEsc = (GetAsyncKeyState(VK_F5) & 0x8000) != 0;
	if (currEsc && !prevEsc) // �̹� �����ӿ� ó�� ������ ����
	{
		GameMng::Getles()->cstateCtrl.StateChange(E_GAME);
	}
	prevEsc = currEsc;

	static bool prevP = false;
	bool currP = (GetAsyncKeyState('P') & 0x8000) != 0;
	if (currP && !prevP) // �̹� �����ӿ� ó�� ������ ����
	{
		GameMng::Getles()->cstateCtrl.StateChange(E_SHOP);
	}
	prevP = currP;
}

void MenuState::Draw() // �޴�ȭ�� �����...
{
	DrawStr(10, 10, "MenuState", WHITE, BLACK);
}

void MenuState::Exit()
{
}
