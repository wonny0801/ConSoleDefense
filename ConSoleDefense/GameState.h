#pragma once
class GameState : public cState
{
public:
	GameState();
	~GameState();

	GameBoard gameboard;

	U0 U0_1;

	void Start()  override;
	void Update() override;
	void Draw()	  override;
	void Exit()	  override;
};
