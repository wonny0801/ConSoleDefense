#include "include.h"

GameMng::GameMng()
{
}

GameMng::~GameMng()
{
}

void GameMng::Init()
{
	cstateCtrl.StateChange(new MenuState);
}

void GameMng::Update()
{
	cstateCtrl.Update();
}

void GameMng::Draw()
{
	cstateCtrl.Draw();
}
