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

#define D_ADVICE_0_1 L"이 게임은 유닛을 소환하여 적 성을 깨면 승리합니다."
#define D_ADVICE_0_2 L"스테이지가 지날수록 적은 더 강력해집니다."
#define D_ADVICE_0_3 L"플레이어도 유닛을 업그레이드하여 적을 무찌르세요."
#define D_ADVICE_0_4 L"5라운드마다 보스전이 진행되며, 적이 더욱 강해집니다."
#define D_ADVICE_0_5 L"과연 몇 스테이지까지 클리어 할 수 있을까요?"
					 
#define D_ADVICE_1_0 L"아래는 플레이어 유닛 설명입니다."
#define D_ADVICE_1_1 L"Unit 1 : 저렴한 기본유닛입니다. 생산속도가 빠릅니다."
#define D_ADVICE_1_2 L"Unit 2 : 저렴한 탱커입니다. 최전선에서 적을 막아줍니다."
#define D_ADVICE_1_3 L"Unit 3 : 적당한 가성비 유닛입니다."
#define D_ADVICE_1_4 L"Unit 4 : 가격,체력,공력력 모두 준수한 중형 유닛입니다."
#define D_ADVICE_1_5 L"Unit 5 : 공격력이 강력하지만 1회성 유닛입니다."
#define D_ADVICE_1_6 L"Unit 6 : 꽤나 멀리서 적을 공격하는 좋은 유닛입니다."
#define D_ADVICE_1_7 L"Unit 7 : 빠른 이동속도, 공격속도로 적을 공격합니다."
#define D_ADVICE_1_8 L"Unit 8 : 고급 탱커 유닛입니다. 체력이 엄청나죠."
#define D_ADVICE_1_9 L"Unit 9 : 모든 방면에서 우수한 고급 유닛입니다."
#define D_ADVICE_1_10 L"Unit 0 : 비싼 최고급 유닛입니다. 엄청 강력합니다!!"
