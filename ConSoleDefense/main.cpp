 #include "include.h"

int main()
{
	Init();

	while (true)
	{
		Update();
		Draw();

		EngineSync(15);
	}

	
	Release();

	return 0;
}