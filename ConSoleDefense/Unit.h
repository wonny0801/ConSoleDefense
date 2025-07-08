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
	bool canMove;

	float hp;
	float damage;
	float speed;
	int range;
	int attackSpeed;
	int level;

	DWORD movetime;
	DWORD attackTime;
	DWORD deathTime;

	virtual void Init();
	void Update(std::vector<Unit*> target);
	virtual void Draw();
	virtual void Move();

	virtual void Upgrade();

	void Attack(Unit* target);
	
	void Clipping();
	void Enable(int x, int y);
	void Disable();

	virtual void death();
};
