#include <stdio.h>
#include <iostream>
#include <Windows.h>	//win32 API
#include <time.h>
#include "define.h"
#include <string>
//-------------------------------------
//�⺻���� Ʋ�� ����� ���ϵ�... �� ����...
#include "Singleton.h"

#include "Unit.h"

#include "State.h"
#include "StateCtrl.h"
//-----------------------------------------


#include"Unit_0.h"


//----------------------------------------------
#include "Player.h"
#include "GameBoard.h"
//��� ������ �����ؾ��ϴ� ���ϵ�... �� �ؿ�...
#include "MenuState.h"
#include "GameState.h" // ��׵� ���� �ؿ�...

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

