#pragma once
class EnemyCastle : public Unit
{
public:
	EnemyCastle();
	~EnemyCastle();

	
	void Init() override;
	void Update();
	void Draw() override;
	void Move() override;

	void Upgrade() override;
};
