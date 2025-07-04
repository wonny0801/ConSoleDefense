#include "include.h"

Player::Player()
{
	lv_1 = 1;
	lv_2 = 0;
	lv_3 = 0;
	lv_4 = 0;
	lv_5 = 0;
	lv_6 = 0;
	lv_7 = 0;
	lv_8 = 0;
	lv_9 = 0;
	lv_0 = 0;
	money = 0;
	upgradePoint = 10000;
	u1Cooltime = GetTickCount();
	moneySpeed = 1;
	moneyTime = GetTickCount();

}

Player::~Player()
{
}

void Player::Upgrade(int unitNumber)
{
	switch (unitNumber)
	{
	case 0:
		lv_0++;
		break;
	case 1:
		lv_1++;
		break;
	case 2:
		lv_2++;
		break;
	case 3:
		lv_3++;
		break;
	case 4:
		lv_4++;
		break;
	case 5:
		lv_5++;
		break;
	case 6:
		lv_6++;
		break;
	case 7:
		lv_7++;
		break;
	case 8:
		lv_8++;
		break;
	case 9:
		lv_9++;
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
	if (moneyTime < GetTickCount())
	{
		moneyTime = GetTickCount() + (1500 / moneySpeed);
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
}
