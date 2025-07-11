#include <stdio.h>
#include <iostream>
#include <Windows.h>	//win32 API
#include <time.h>
#include "define.h"
#include <string>
#include <vector>
#include <cmath>
//-------------------------------------
//�⺻���� Ʋ�� ����� ���ϵ�... �� ����...
#include "Singleton.h"

#include "Unit.h"

#include "State.h"
#include "StateCtrl.h"
//-----------------------------------------
#include "Enemy.h"
#include "EnemyBoss.h"

#include "Unit_9.h"
#include "Unit_8.h"
#include "Unit_7.h"
#include "Unit_6.h"
#include "Unit_5.h"
#include "Unit_4.h"
#include "Unit_3.h"
#include "Unit_2.h"
#include "Unit_1.h"
#include "Unit_0.h"

#include "MyCastle.h"
#include "EnemyCastle.h"
//----------------------------------------------
#include "Player.h"
#include "GameBoard.h"
//��� ������ �����ؾ��ϴ� ���ϵ�... �� �ؿ�...
#include "AdviceState.h"
#include "ResultState.h"
#include "MenuState.h"
#include "GameState.h" // ��׵� ���� �ؿ�...
#include "ShopState.h"

#include "GameMng.h" // ���� �Ŵ����� ������ �� �ؿ�...

void Init();
void Update();
void Draw();
void Release();


void DrawStr(int x, int y, const char* str, WORD fcolor, WORD bcolor);
void DrawChar(int x, int y, const char c, WORD fcolor, WORD bcolor);
void DrawUniCode(int x, int y, const wchar_t* board, WORD fColor, WORD bColor);
void EngineSync(int fps);
void ClearScreen();
void Flip();

