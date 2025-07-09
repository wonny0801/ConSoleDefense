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

	Player();
	~Player();

	void Upgrade(int unitNumber);

	
	void Update();
	void moneyUp();

	void buyUnit();
	
	void Restart();

	void PlayerInit();
};
