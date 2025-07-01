#include "include.h"

template<typename T>
T* Singleton<T>::instance = nullptr;// Singleton 클래스의 전역변수 초기화 필수...!!!

int screenIndex;
HANDLE hScreen[2];

//GameMng gamemng;

//int x, y;

void Init()
{
	hScreen[0] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	hScreen[1] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);

	CONSOLE_CURSOR_INFO cci;
	cci.bVisible = false;
	cci.dwSize = 1;

	SetConsoleCursorInfo(hScreen[0], &cci);
	SetConsoleCursorInfo(hScreen[1], &cci);

	SetConsoleOutputCP(CP_UTF8);
	std::wcout.imbue(std::locale("en_US.utf8"));// 유니코드 출력용 준비코드....

	GameMng::Getles()->Init();
}
void Update()
{
	//PlayerUpdate();
	//gamemng.Update();

	GameMng::Getles()->Update();
	
}
void Draw()
{
	ClearScreen(); // 화면 지우기
	//PlayerDraw();
	//gamemng.Draw();

	GameMng::Getles()->Draw();
	
	Flip(); // 화면전환, 이중버퍼링
}


void Release()
{
	CloseHandle(hScreen[0]);
	CloseHandle(hScreen[1]);
}

void DrawStr(int x, int y, const char* str, WORD fcolor, WORD bcolor)
{
	if (x > 119 || x < 0 || y > 29 || y < 0)
		return;

	WORD color = (bcolor << 4) | (fcolor & 0x0F);
	COORD coor = { x,y };
	DWORD dw;
	SetConsoleCursorPosition(hScreen[screenIndex], coor);
	SetConsoleTextAttribute(hScreen[screenIndex], color);

	int maxLen = 120 - x;
	int strLen = strlen(str);

	if (maxLen < strLen)
		strLen = maxLen;

	WriteFile(hScreen[screenIndex], str, strLen, &dw, NULL);
}

void DrawChar(int x, int y, const char c, WORD fcolor, WORD bcolor)
{
	if (x > 119 || x < 0 || y > 29 || y < 0)
		return;

	WORD color = (bcolor << 4) | (fcolor & 0x0F);
	COORD coor = { x,y };
	DWORD dw;
	SetConsoleCursorPosition(hScreen[screenIndex], coor);
	SetConsoleTextAttribute(hScreen[screenIndex], color);

	char str[2];
	str[0] = c;
	str[1] = '\0';

	WriteFile(hScreen[screenIndex], str, 2, &dw, NULL);
}

void DrawUniCode(int x, int y, const wchar_t* board, WORD fcolor, WORD bcolor)
{
	if (x > 119 || x < 0 || y > 29 || y < 0)
		return;

	WORD color = (bcolor << 4) | (fcolor & 0x0F);
	COORD coor = { x,y };
	DWORD dw;
	SetConsoleCursorPosition(hScreen[screenIndex], coor);
	SetConsoleTextAttribute(hScreen[screenIndex], color);

	int maxLen = 120 - x;
	int strLen = wcslen(board);

	if (maxLen < strLen)
		strLen = maxLen;

	WriteConsoleW(hScreen[screenIndex], board, strLen, &dw, NULL);

}

void EngineSync(int fps)
{
	//					프로그램 실행 시간
	clock_t old = clock();
	clock_t cur;

	while (true)
	{
		cur = clock();	// 0.03
		if (cur - old > 1000 / fps)
			break;
	}
}

void ClearScreen()
{
	COORD coor = { 0,0 };
	DWORD dw;

	FillConsoleOutputCharacter(hScreen[screenIndex], ' ', 120 * 30, coor, &dw);
	FillConsoleOutputAttribute(hScreen[screenIndex], 0, 120 * 30, coor, &dw);
}

void Flip()
{
	//더블 버퍼링
	SetConsoleActiveScreenBuffer(hScreen[screenIndex]);
	screenIndex = !screenIndex;
}