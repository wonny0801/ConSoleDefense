#include "include.h"

Player::Player()
{
	for (int i = 0; i < D_UNIT; i++)
	{
		lv[i] = 0;
	}
	lv[1] = 1;

	upg[1] = 100;
	upg[2] = 500;
	upg[3] = 1000;
	upg[4] = 3000;
	upg[5] = 5000;
	upg[6] = 7000;
	upg[7] = 12000;
	upg[8] = 20000;
	upg[9] = 40000;
	upg[0] = 100000;
			 
			 

	money = 10;
	upgradePoint = 10000;
	u1Cooltime = GetTickCount();

	moneyLv = 1;
	moneySpeed = 1;
	moneyUpgPoint = 100;
	moneyTime = GetTickCount();

	castleHp = 100;

}

Player::~Player()
{
}

void Player::Upgrade(int unitNumber)
{
	switch (unitNumber)
	{
	case 0:
		lv[0]++;
		break;
	case 1:
		lv[1]++;
		break;
	case 2:
		lv[2]++;
		break;
	case 3:
		lv[3]++;
		break;
	case 4:
		lv[4]++;
		break;
	case 5:
		lv[5]++;
		break;
	case 6:
		lv[6]++;
		break;
	case 7:
		lv[7]++;
		break;
	case 8:
		lv[8]++;
		break;
	case 9:
		lv[9]++;
		break;
	}
}

void Player::Update()
{
	buyUnit();
	moneyUp();
}

void Player::moneyUp()
{
	if (moneySpeed <= 0) return;
	if (moneyTime < GetTickCount())
	{
		moneyTime = GetTickCount() + (1000 / moneySpeed);
		money++;
	}
}

void Player::buyUnit()
{
	if (GetAsyncKeyState('1'))
	{
		if (money >= 10 && u1Cooltime < GetTickCount())
		{
			u1Cooltime = GetTickCount() + 500;
			money -= 10;
			U1* newUnit = new U1();
			newUnit->Enable(0, 22);
			((GameState*)GameMng::Getles()->
				cstateCtrl.m_pCurState)->playerUnit.push_back(newUnit);
		}
	}
	if (GetAsyncKeyState('2'))
	{
		if (money >= 30 && u1Cooltime < GetTickCount())
		{
			u1Cooltime = GetTickCount() + 1000;
			money -= 30;
			U2* newUnit = new U2();
			newUnit->Enable(0, 22);
			((GameState*)GameMng::Getles()->
				cstateCtrl.m_pCurState)->playerUnit.push_back(newUnit);
		}
	}
}

void Player::Restart()
{
	PlayerInit();
}

void Player::PlayerInit()
{
	for (int i = 0; i < D_UNIT; i++)
	{
		lv[i] = 0;
	}
	lv[1] = 1;

	upg[1] = 100;
	upg[2] = 500;
	upg[3] = 1000;
	upg[4] = 3000;
	upg[5] = 5000;
	upg[6] = 7000;
	upg[7] = 12000;
	upg[8] = 20000;
	upg[9] = 40000;
	upg[0] = 100000;

	money = 10;
	upgradePoint = 100;
	u1Cooltime = GetTickCount();
	moneySpeed = 1;
	moneyUpgPoint = 100;
	moneyTime = GetTickCount();

	castleHp = 100;
}
