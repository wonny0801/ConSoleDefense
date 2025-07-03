#include "include.h"

GameState::GameState()
{
	enemyCoolTime = GetTickCount();
}

GameState::~GameState()
{
}

void GameState::Start()
{
}

void GameState::Update()// ���ӽ�����Ʈ���� ����� ��ɵ� �����ϱ� (��κ��� ���ӱ�ɵ�)
{
	
	CreateEnemy();
	if (GetAsyncKeyState(VK_ESCAPE))
	{
		GameMng::Getles()->cstateCtrl.StateChange(E_MENU);
	}
	//U0_1.Update();
	GameMng::Getles()->player.Update();
	for (int i = 0; i < playerUnit.size(); i++)
	{
		playerUnit[i]->Update();
	}
	for (int i = 0; i < enemys.size(); i++)
	{
		enemys[i]->Update();
	}

	UnitClipping();
}

void GameState::Draw()
{
	DrawStr(100, 10, "GameState", WHITE, BLACK);
	gameboard.Draw();

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
                    // ��Ÿ� ���� ���� �ִ��� üũ
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
