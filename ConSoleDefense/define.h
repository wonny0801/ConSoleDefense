#pragma once
#define BLACK 0
#define BLUE           FOREGROUND_BLUE
#define GREEN          FOREGROUND_GREEN
#define RED            FOREGROUND_RED
#define YELLOW         (FOREGROUND_RED | FOREGROUND_GREEN)
#define MAGENTA        (FOREGROUND_BLUE | FOREGROUND_RED)
#define CYAN           (FOREGROUND_BLUE | FOREGROUND_GREEN)
#define WHITE          (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED)

#define INTENSITY_BLACK    FOREGROUND_INTENSITY
#define INTENSITY_BLUE     (FOREGROUND_BLUE | FOREGROUND_INTENSITY)
#define INTENSITY_GREEN    (FOREGROUND_GREEN | FOREGROUND_INTENSITY)
#define INTENSITY_RED      (FOREGROUND_RED | FOREGROUND_INTENSITY)
#define INTENSITY_YELLOW   (FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY)
#define INTENSITY_MAGENTA  (FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY)
#define INTENSITY_CYAN     (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY)
#define INTENSITY_WHITE    (FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY)

#define D_UNIT 10
#define D_STAGE GameMng::Getles()->gameboard.stage
//enum
//{
//	E_MENU,
//	E_GAME,
//	E_SHOP,
//	E_STATE_MAX
//};
//enum
//{
//	e_MENU,
//	e_GAME,
//	e_SHOP
//};

#define D_ADVICE_0_1 L"�� ������ ������ ��ȯ�Ͽ� �� ���� ���� �¸��մϴ�."
#define D_ADVICE_0_2 L"���������� �������� ���� �� ���������ϴ�."
#define D_ADVICE_0_3 L"�÷��̾ ������ ���׷��̵��Ͽ� ���� �������."
#define D_ADVICE_0_4 L"5���帶�� �������� ����Ǹ�, ���� ���� �������ϴ�."
#define D_ADVICE_0_5 L"���� �� ������������ Ŭ���� �� �� �������?"
					 
#define D_ADVICE_1_0 L"�Ʒ��� �÷��̾� ���� �����Դϴ�."
#define D_ADVICE_1_1 L"Unit 1 : ������ �⺻�����Դϴ�. ����ӵ��� �����ϴ�."
#define D_ADVICE_1_2 L"Unit 2 : ������ ��Ŀ�Դϴ�. ���������� ���� �����ݴϴ�."
#define D_ADVICE_1_3 L"Unit 3 : ������ ������ �����Դϴ�."
#define D_ADVICE_1_4 L"Unit 4 : ����,ü��,���·� ��� �ؼ��� ���� �����Դϴ�."
#define D_ADVICE_1_5 L"Unit 5 : ���ݷ��� ���������� 1ȸ�� �����Դϴ�."
#define D_ADVICE_1_6 L"Unit 6 : �ϳ� �ָ��� ���� �����ϴ� ���� �����Դϴ�."
#define D_ADVICE_1_7 L"Unit 7 : ���� �̵��ӵ�, ���ݼӵ��� ���� �����մϴ�."
#define D_ADVICE_1_8 L"Unit 8 : ��� ��Ŀ �����Դϴ�. ü���� ��û����."
#define D_ADVICE_1_9 L"Unit 9 : ��� ��鿡�� ����� ��� �����Դϴ�."
#define D_ADVICE_1_10 L"Unit 0 : ��� �ְ�� �����Դϴ�. ��û �����մϴ�!!"
