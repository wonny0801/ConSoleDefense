#include "include.h"

ShopState::ShopState()
{
}

ShopState::~ShopState()
{
}

void ShopState::Start()
{
}

void ShopState::Update()
{
	static bool prevEsc = false;
	bool currEsc = (GetAsyncKeyState(VK_ESCAPE) & 0x8000) != 0;

	if (currEsc && !prevEsc) // �̹� �����ӿ� ó�� ������ ����
	{
		GameMng::Getles()->cstateCtrl.StateChange(new MenuState);
	}
	prevEsc = currEsc;

	static bool prevR = false;
	bool currR = (GetAsyncKeyState('R') & 0x8000) != 0;

	if (currR && !prevR) // �̹� �����ӿ� ó�� ������ ����
	{
		GameMng::Getles()->cstateCtrl.StateChange(new GameState);
		GameMng::Getles()->player.money = 10;
	}
	prevR = currR;

	UnitUpgrade();
}

void ShopState::Draw()
{
	GameMng::Getles()->gameboard.Draw();
	DrawStr(50, 22, "Next Round : press 'R'", INTENSITY_WHITE, BLACK);
	
	DrawStr(3, 2, ("Upgrade Point : " +
		std::to_string(GameMng::Getles()->player.upgradePoint)).c_str(),
		INTENSITY_WHITE, BLACK);

	DrawStr(3, 10, "(My Castle HP) LV : press 'H' / 1000p",
		INTENSITY_WHITE, BLACK);

	DrawStr(3, 12, ("(Money Up Speed Lv : " + std::to_string
	(GameMng::Getles()->player.moneySpeed) + ") press 'M' / " + 
		std::to_string(GameMng::Getles()->player.moneyUpgPoint) + "p").c_str()
		, INTENSITY_WHITE, BLACK);

	for (int i = 0; i < D_UNIT; i++)
	{
		int temp = i;
		if (i == 0)
			temp = 10;
	
		DrawStr(80, temp * 2 + 3, ("(Unit " + std::to_string(i) + 
			") Upgrade : press " + std::to_string(i) + 
			" / " + std::to_string(GameMng::Getles()->player.upg[i]) + 
			"p").c_str(),INTENSITY_WHITE, BLACK);
	}
}

void ShopState::Exit()
{
}

void ShopState::UnitUpgrade()
{
	static bool prev1 = false;
	bool curr1 = (GetAsyncKeyState('1') & 0x8000) != 0;
	if (curr1 && !prev1 &&
		GameMng::Getles()->player.upgradePoint >=
		GameMng::Getles()->player.upg[1])
	{
		GameMng::Getles()->player.upgradePoint -=
			GameMng::Getles()->player.upg[1]; // ����Ʈ ����
		GameMng::Getles()->player.upg[1] *= 2; // ��������
		GameMng::Getles()->player.lv[1]++; // ��������
	}
	prev1 = curr1;
	//-----------------------------------------------------
	static bool prev2 = false;
	bool curr2 = (GetAsyncKeyState('2') & 0x8000) != 0;
	if (curr2 && !prev2 &&
		GameMng::Getles()->player.upgradePoint >=
		GameMng::Getles()->player.upg[2])
	{
		GameMng::Getles()->player.upgradePoint -=
			GameMng::Getles()->player.upg[2]; // ����Ʈ ����
		GameMng::Getles()->player.upg[2] *= 2; // ��������
		GameMng::Getles()->player.lv[2]++; // ��������
	}
	prev2 = curr2;
	//-----------------------------------------------------
	static bool prev3 = false;
	bool curr3 = (GetAsyncKeyState('3') & 0x8000) != 0;
	if (curr3 && !prev3 &&
		GameMng::Getles()->player.upgradePoint >=
		GameMng::Getles()->player.upg[3])
	{
		GameMng::Getles()->player.upgradePoint -=
			GameMng::Getles()->player.upg[3]; // ����Ʈ ����
		GameMng::Getles()->player.upg[3] *= 2; // ��������
		GameMng::Getles()->player.lv[3]++; // ��������
	}
	prev3 = curr3;
	//-----------------------------------------------------
	static bool prev4 = false;
	bool curr4 = (GetAsyncKeyState('4') & 0x8000) != 0;
	if (curr4 && !prev4 &&
		GameMng::Getles()->player.upgradePoint >=
		GameMng::Getles()->player.upg[4])
	{
		GameMng::Getles()->player.upgradePoint -=
			GameMng::Getles()->player.upg[4]; // ����Ʈ ����
		GameMng::Getles()->player.upg[4] *= 2; // ��������
		GameMng::Getles()->player.lv[4]++; // ��������
	}
	prev4 = curr4;
	//-----------------------------------------------------
	static bool prev5 = false;
	bool curr5 = (GetAsyncKeyState('5') & 0x8000) != 0;
	if (curr5 && !prev5 &&
		GameMng::Getles()->player.upgradePoint >=
		GameMng::Getles()->player.upg[5])
	{
		GameMng::Getles()->player.upgradePoint -=
			GameMng::Getles()->player.upg[5]; // ����Ʈ ����
		GameMng::Getles()->player.upg[5] *= 2; // ��������
		GameMng::Getles()->player.lv[5]++; // ��������
	}
	prev5 = curr5;
	//-----------------------------------------------------
	static bool prev6 = false;
	bool curr6 = (GetAsyncKeyState('6') & 0x8000) != 0;
	if (curr6 && !prev6 &&
		GameMng::Getles()->player.upgradePoint >=
		GameMng::Getles()->player.upg[6])
	{
		GameMng::Getles()->player.upgradePoint -=
			GameMng::Getles()->player.upg[6]; // ����Ʈ ����
		GameMng::Getles()->player.upg[6] *= 2; // ��������
		GameMng::Getles()->player.lv[6]++; // ��������
	}
	prev6 = curr6;
	//-----------------------------------------------------
	static bool prev7 = false;
	bool curr7 = (GetAsyncKeyState('7') & 0x8000) != 0;
	if (curr7 && !prev7 &&
		GameMng::Getles()->player.upgradePoint >=
		GameMng::Getles()->player.upg[7])
	{
		GameMng::Getles()->player.upgradePoint -=
			GameMng::Getles()->player.upg[7]; // ����Ʈ ����
		GameMng::Getles()->player.upg[7] *= 2; // ��������
		GameMng::Getles()->player.lv[7]++; // ��������
	}
	prev7 = curr7;
	//-----------------------------------------------------
	static bool prev8 = false;
	bool curr8 = (GetAsyncKeyState('8') & 0x8000) != 0;
	if (curr8 && !prev8 &&
		GameMng::Getles()->player.upgradePoint >=
		GameMng::Getles()->player.upg[8])
	{
		GameMng::Getles()->player.upgradePoint -=
			GameMng::Getles()->player.upg[8]; // ����Ʈ ����
		GameMng::Getles()->player.upg[8] *= 2; // ��������
		GameMng::Getles()->player.lv[8]++; // ��������
	}
	prev8 = curr8;
	//-----------------------------------------------------
	static bool prev9 = false;
	bool curr9 = (GetAsyncKeyState('9') & 0x8000) != 0;
	if (curr9 && !prev9 &&
		GameMng::Getles()->player.upgradePoint >=
		GameMng::Getles()->player.upg[9])
	{
		GameMng::Getles()->player.upgradePoint -=
			GameMng::Getles()->player.upg[9]; // ����Ʈ ����
		GameMng::Getles()->player.upg[9] *= 2; // ��������
		GameMng::Getles()->player.lv[9]++; // ��������
	}
	prev9 = curr9;
	//-----------------------------------------------------
	static bool prev0 = false;
	bool curr0 = (GetAsyncKeyState('0') & 0x8000) != 0;
	if (curr0 && !prev0 &&
		GameMng::Getles()->player.upgradePoint >=
		GameMng::Getles()->player.upg[0])
	{
		GameMng::Getles()->player.upgradePoint -=
			GameMng::Getles()->player.upg[0]; // ����Ʈ ����
		GameMng::Getles()->player.upg[0] *= 2; // ��������
		GameMng::Getles()->player.lv[0]++; // ��������
	}
	prev0 = curr0;
	//-----------------------------------------------------------
	static bool prevH = false;
	bool currH = (GetAsyncKeyState('H') & 0x8000) != 0;
	if (currH && !prevH &&
		GameMng::Getles()->player.upgradePoint >= 1000)
	{
		GameMng::Getles()->player.upgradePoint -= 1000; // ����Ʈ ����
		GameMng::Getles()->player.castleHp += 100; // ��ü�� ����
	}
	prevH = currH;
	//--------------------------------------------------------
	static bool prevM = false;
	bool currM = (GetAsyncKeyState('M') & 0x8000) != 0;
	if (currM && !prevM &&
		GameMng::Getles()->player.upgradePoint >=
			GameMng::Getles()->player.moneyUpgPoint)
	{
		GameMng::Getles()->player.upgradePoint -=
			GameMng::Getles()->player.moneyUpgPoint;// ����Ʈ ����

		GameMng::Getles()->player.moneyUpgPoint *= 10; // ��������
		GameMng::Getles()->player.moneyLv++; // ��������
		GameMng::Getles()->player.moneySpeed *= 2; // �ӴϾ� ���ǵ� ����
	}
	prevM = currM;
	//--------------------------------------------------
}
