#include "include.h"

GameState::GameState()
{
	enemyCoolTime = GetTickCount();
    castle = new EnemyCastle();
    enemys.push_back(castle);
    mycastle = new MyCastle();
    playerUnit.push_back(mycastle);
}

GameState::~GameState()
{
}

void GameState::Start()
{
}

void GameState::Update()// 게임스테이트에서 사용할 기능들 구현하기 (대부분의 게임기능들)
{
    static bool prevEsc = false;
    bool currEsc = (GetAsyncKeyState(VK_ESCAPE) & 0x8000) != 0;
    if (currEsc && !prevEsc) // 이번 프레임에 처음 눌렸을 때만
    {
        GameMng::Getles()->cstateCtrl.StateChange(new MenuState);
    }
    prevEsc = currEsc;

    if (castle->hp <= 0)
    {
        GameMng::Getles()->cstateCtrl.StateChange(new ShopState);
        GameMng::Getles()->gameboard.stage++;
    }
    if (mycastle->hp <= 0)
    {
        GameMng::Getles()->cstateCtrl.StateChange(new ResultState);
    }

    CreateEnemy();
	//U0_1.Update();
	GameMng::Getles()->player.Update();
	for (int i = 0; i < playerUnit.size(); i++)
	{
		playerUnit[i]->Update(enemys);
	}
	for (int i = 0; i < enemys.size(); i++)
	{
		enemys[i]->Update(playerUnit);
	}

	UnitClipping();
}

void GameState::Draw()
{
    DrawStr(2, 2, ("money : " + std::to_string(GameMng::Getles()->player.money)).c_str(),
        WHITE, BLACK);
	DrawStr(100, 10, "GameState", WHITE, BLACK);
	GameMng::Getles()->gameboard.Draw();

	//U0_1.Draw();
	for (int i = 0; i < playerUnit.size(); i++)
	{
		playerUnit[i]->Draw();
	}
	for (int i = 0; i < enemys.size(); i++)
	{
		enemys[i]->Draw();
	}
}

void GameState::Exit()
{
}

void GameState::CreateEnemy()
{
	if (enemyCoolTime < GetTickCount())
	{
		enemyCoolTime += rand() % 3000 + 30000;
		Enemy* enemy = new Enemy();
		enemy->Enable(enemy->x,enemy->y);
		enemys.push_back(enemy);
	}
}

void GameState::UnitClipping()
{
    for (int i = 0; i < playerUnit.size(); i++)
    {
        if (playerUnit[i]->isAlive)
        {
            bool inRange = false;
            for (int j = 0; j < enemys.size(); j++)
            {
                if (enemys[j]->isAlive)
                {
                    // 사거리 내에 적이 있는지 체크
                    if (abs(playerUnit[i]->x - enemys[j]->x) <= playerUnit[i]->range)
                    {
                        inRange = true;
                        break;
                    }
                }
            }
            playerUnit[i]->canMove = !inRange;
        }
    }

    for (int j = 0; j < enemys.size(); j++)
    {
        if (enemys[j]->isAlive)
        {
            bool inRange = false;
            for (int i = 0; i < playerUnit.size(); i++)
            {
                if (playerUnit[i]->isAlive)
                {
                    if (abs(enemys[j]->x - playerUnit[i]->x) <= enemys[j]->range)
                    {
                        inRange = true;
                        break;
                    }
                }
            }
            enemys[j]->canMove = !inRange;
        }
    }
}
