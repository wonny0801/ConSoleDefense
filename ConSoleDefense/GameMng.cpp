#include "include.h"

GameMng::GameMng()
{
}

GameMng::~GameMng()
{
}

void GameMng::Init()
{
	cstateCtrl.StateAdd(E_MENU, new MenuState());
	cstateCtrl.StateAdd(E_GAME, new GameState());

	cstateCtrl.StateChange(E_MENU);
}

void GameMng::Update()
{
	cstateCtrl.Update();
}

void GameMng::Draw()
{
	cstateCtrl.Draw();
}
