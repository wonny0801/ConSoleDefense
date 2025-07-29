#include "include.h"

Player::Player()
{
	PlayerInit();
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
		if (moneySpeed < 32)
		{
			moneyTime = GetTickCount() + (1000 / moneySpeed);
			money++;
		}
		else
		{
			moneyTime = GetTickCount() + 125;
			money += moneySpeed / 16;
		}
	}
}

void Player::buyUnit()
{
	if (GetAsyncKeyState('1'))
	{
		if (money >= 10 && u1Cooltime < GetTickCount()
			&& lv[1] != 0)
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
		if (money >= 30 && u2Cooltime < GetTickCount()
			&& lv[2] != 0)
		{
			u2Cooltime = GetTickCount() + 500;
			money -= 30;
			U2* newUnit = new U2();
			newUnit->Enable(0, 22);
			((GameState*)GameMng::Getles()->
				cstateCtrl.m_pCurState)->playerUnit.push_back(newUnit);
		}
	}
	if (GetAsyncKeyState('3'))
	{
		if (money >= 150 && u3Cooltime < GetTickCount()
			&& lv[3] != 0)
		{
			u3Cooltime = GetTickCount() + 1500;
			money -= 150;
			U3* newUnit = new U3();
			newUnit->Enable(0, 22);
			((GameState*)GameMng::Getles()->
				cstateCtrl.m_pCurState)->playerUnit.push_back(newUnit);
		}
	}
	if (GetAsyncKeyState('4'))
	{
		if (money >= 300 && u4Cooltime < GetTickCount()
			&& lv[4] != 0)
		{
			u4Cooltime = GetTickCount() + 2500;
			money -= 300;
			U4* newUnit = new U4();
			newUnit->Enable(0, 22);
			((GameState*)GameMng::Getles()->
				cstateCtrl.m_pCurState)->playerUnit.push_back(newUnit);
		}
	}
	if (GetAsyncKeyState('5'))
	{
		if (money >= 500 && u5Cooltime < GetTickCount()
			&& lv[5] != 0)
		{
			u5Cooltime = GetTickCount() + 3000;
			money -= 500;
			U5* newUnit = new U5();
			newUnit->Enable(0, 22);
			((GameState*)GameMng::Getles()->
				cstateCtrl.m_pCurState)->playerUnit.push_back(newUnit);
		}
	}
	if (GetAsyncKeyState('6'))
	{
		if (money >= 800 && u6Cooltime < GetTickCount()
			&& lv[6] != 0)
		{
			u6Cooltime = GetTickCount() + 5000;
			money -= 800;
			U6* newUnit = new U6();
			newUnit->Enable(0, 22);
			((GameState*)GameMng::Getles()->
				cstateCtrl.m_pCurState)->playerUnit.push_back(newUnit);
		}
	}
	if (GetAsyncKeyState('7'))
	{
		if (money >= 1200 && u7Cooltime < GetTickCount()
			&& lv[7] != 0)
		{
			u7Cooltime = GetTickCount() + 5500;
			money -= 1200;
			U7* newUnit = new U7();
			newUnit->Enable(0, 22);
			((GameState*)GameMng::Getles()->
				cstateCtrl.m_pCurState)->playerUnit.push_back(newUnit);
		}
	}
	if (GetAsyncKeyState('8'))
	{
		if (money >= 1800 && u8Cooltime < GetTickCount()
			&& lv[8] != 0)
		{
			u8Cooltime = GetTickCount() + 6000;
			money -= 1800;
			U8* newUnit = new U8();
			newUnit->Enable(0, 22);
			((GameState*)GameMng::Getles()->
				cstateCtrl.m_pCurState)->playerUnit.push_back(newUnit);
		}
	}
	if (GetAsyncKeyState('9'))
	{
		if (money >= 2200 && u9Cooltime < GetTickCount()
			&& lv[9] != 0)
		{
			u9Cooltime = GetTickCount() + 8000;
			money -= 2200;
			U9* newUnit = new U9();
			newUnit->Enable(0, 22);
			((GameState*)GameMng::Getles()->
				cstateCtrl.m_pCurState)->playerUnit.push_back(newUnit);
		}
	}
	if (GetAsyncKeyState('0'))
	{
		if (money >= 3000 && u0Cooltime < GetTickCount()
			&& lv[0] != 0)
		{
			u0Cooltime = GetTickCount() + 10000;
			money -= 3000;
			U0* newUnit = new U0();
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

	upg[1] = 200;
	upg[2] = 300;
	upg[3] = 600;
	upg[4] = 1000;
	upg[5] = 2000;
	upg[6] = 3000;
	upg[7] = 5000;
	upg[8] = 7000;
	upg[9] = 10000;
	upg[0] = 22000;



	money = 100;
	upgradePoint = 0;
	u1Cooltime = GetTickCount();
	u1Cooltime = GetTickCount();
	u2Cooltime = GetTickCount();
	u3Cooltime = GetTickCount();
	u4Cooltime = GetTickCount();
	u5Cooltime = GetTickCount();
	u6Cooltime = GetTickCount();
	u7Cooltime = GetTickCount();
	u8Cooltime = GetTickCount();
	u9Cooltime = GetTickCount();
	u0Cooltime = GetTickCount();

	moneyLv = 1;
	moneySpeed = 1;
	moneyUpgPoint = 100;
	moneyTime = GetTickCount();

	castleHp = 100;

	AdviceNumber = 0;
}
