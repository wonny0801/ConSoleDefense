#pragma once
class Unit
{
public:
	Unit();
	~Unit();

	int x;
	int y;
	char body;
	WORD fColor;
	WORD bColor;
	bool isAlive;

	float hp;
	float damage;
	float speed;
	int level;

	DWORD movetime;

	virtual void Init();
	virtual void Update();
	virtual void Draw();
	virtual void Move();

	virtual void Upgrade();

	void Clipping();
	void Enable(int x, int y);
	void Disable();
};
