 #include "include.h"

int main()
{
	SetConsoleOutputCP(CP_UTF8);

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
// ����â ��� �����ؾ���....
// ���ֵ� ���� ��������....
// ��� ������ �߰��ϸ� ����...
// ���� óġ �� ��������Ʈ �� ���� ����ҵ�
// �������� Ŭ����� ��������Ʈ ����...
// ���� �뷱�� ���߱�
// �� ���� ���� �� ����