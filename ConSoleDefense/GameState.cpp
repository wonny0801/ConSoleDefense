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

void GameState::Update()// 게임스테이트에서 사용할 기능들 구현하기 (대부분의 게임기능들)
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
