#include "include.h"

GameMng::GameMng()
{
}

GameMng::~GameMng()
{
}

void GameMng::Init()
{
	cstateCtrl.StateChange(new AdviceState);
}

void GameMng::Update()
{
	cstateCtrl.Update();
}

void GameMng::Draw()
{
	cstateCtrl.Draw();
}
