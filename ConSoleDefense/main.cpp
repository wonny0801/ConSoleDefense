 #include "include.h"

int main()
{
	Init();

	while (true)
	{
		Update();
		Draw();

		EngineSync(30);
	}

	
	Release();

	return 0;
}
//TODO
// 상점창 기능 구현해야함....
// 유닛들 마저 만들어야함....
// 상대 보스몹 추가하면 좋음...
// 유닛 처치 시 업글포인트 좀 많이 줘야할듯
// 스테이지 클리어시 업글포인트 지급...
// 유닛 밸런스 맞추기
// 적 유닛 생성 쿨 조정