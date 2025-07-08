#include "include.h"

ResultState::ResultState()
{
}

ResultState::~ResultState()
{
}

void ResultState::Start()
{
}

void ResultState::Update()
{
	if (GetAsyncKeyState(VK_ESCAPE))
	{
		exit(0);
	}
	if (GetAsyncKeyState(VK_F5))
	{
		GameMng::Getles()->cstateCtrl.StateChange(new MenuState);
		GameMng::Getles()->gameboard.stage = 1;
		GameMng::Getles()->player.Restart();
	}
}

void ResultState::Draw()
{
	DrawStr(54, 15, ("RESULT : " +
		std::to_string(GameMng::Getles()->gameboard.stage) +
		" STAGE").c_str(), WHITE, BLACK);
	DrawStr(54, 20, "RESTART ? : press F5...", WHITE, BLACK);
	DrawStr(54, 22, "EXIT ? : press Esc...", WHITE, BLACK);
}

void ResultState::Exit()
{
}
