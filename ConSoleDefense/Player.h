#pragma once
class Player
{
public:

	int lv[11];
	int upg[11];


	int money;
	int upgradePoint;

	int moneyLv;
	int moneySpeed;
	int moneyUpgPoint;

	int castleHp;
	DWORD moneyTime;
	DWORD u1Cooltime;
	DWORD u2Cooltime;
	DWORD u3Cooltime;
	DWORD u4Cooltime;
	DWORD u5Cooltime;
	DWORD u6Cooltime;
	DWORD u7Cooltime;
	DWORD u8Cooltime;
	DWORD u9Cooltime;
	DWORD u0Cooltime;

	Player();
	~Player();

	void Upgrade(int unitNumber);

	
	void Update();
	void moneyUp();

	void buyUnit();
	
	void Restart();

	void PlayerInit();
};
