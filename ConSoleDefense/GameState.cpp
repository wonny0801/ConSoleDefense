#include "include.h"

GameState::GameState()
{
	
}

GameState::~GameState()
{
}

void GameState::Start()
{
}

void GameState::Update()// ���ӽ�����Ʈ���� ����� ��ɵ� �����ϱ� (��κ��� ���ӱ�ɵ�)
{
	if (GetAsyncKeyState(VK_ESCAPE))
	{
		GameMng::Getles()->cstateCtrl.StateChange(E_MENU);
	}
	U0_1.Update();
}

void GameState::Draw()
{
	DrawStr(100, 10, "GameState", WHITE, BLACK);
	gameboard.Draw();

	U0_1.Draw();
}

void GameState::Exit()
{
}
