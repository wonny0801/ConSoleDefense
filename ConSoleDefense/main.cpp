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