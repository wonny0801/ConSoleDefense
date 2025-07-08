#pragma once
class GameBoard : public Unit
{
public:
	GameBoard();
	~GameBoard();

	int stage;

	void Update();
	void Draw() override;

	void DrawUnit(int x, const char body, int money);
	 
};