#pragma once
class EnemyBoss : public Unit
{
public:
	EnemyBoss();
	~EnemyBoss();



	void Update(std::vector<Unit*> target) override;
	//void Draw();
	void Move() override;
	void death() override;

};
