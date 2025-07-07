 #include "include.h"

int main()
{
	Init();

	while (true)
	{
		Update();
		Draw();

		EngineSync(20);
	}

	
	Release();

	return 0;
}