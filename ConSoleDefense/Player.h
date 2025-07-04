#pragma once
class Player
{
public:


	int lv_1;
	int lv_2;
	int lv_3;
	int lv_4;
	int lv_5;
	int lv_6;
	int lv_7;
	int lv_8;
	int lv_9;
	int lv_0;

	int money;
	int upgradePoint;

	
	int moneySpeed;
	DWORD moneyTime;
	DWORD u1Cooltime;

	Player();
	~Player();

	void Upgrade(int unitNumber);

	
	void Update();
	void moneyUp();

	void buyUnit();
	
};
