#pragma once
class Enemy : public Unit
{
public:
	Enemy();
	~Enemy();

	

	//void Update() override;
	//void Draw();
	void Move() override;
	void death() override;
	
};
