#pragma once
class Player
{
public:
	int lv_0;
	int lv_1;
	int lv_2;
	int lv_3;
	int lv_4;
	int lv_5;
	int lv_6;
	int lv_7;
	int lv_8;
	int lv_9;

	int money;
	Player()
	{
		lv_0 = 1;
		lv_1 = 0;
		lv_2 = 0;
		lv_3 = 0;
		lv_4 = 0;
		lv_5 = 0;
		lv_6 = 0;
		lv_7 = 0;
		lv_8 = 0;
		lv_9 = 0;
		money = 0;
	}
	~Player()
	{

	}
	void Upgrade_0()
	{
		lv_0++;
	}
	

};
