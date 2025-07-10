#pragma once
class GameState : public cState
{
public:
	GameState();
	~GameState();

	DWORD enemyCoolTime;

	//GameBoard gameboard;

	std::vector<Unit*> playerUnit;
	std::vector<Unit*> enemys;

	EnemyBoss* enemyboss;

	MyCastle* mycastle;
	EnemyCastle* castle;

	void Start()  override;
	void Update() override;
	void Draw()	  override;
	void Exit()	  override;

	void CreateEnemy();

	void UnitClipping();
};
