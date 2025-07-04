#pragma once
class ShopState : public cState
{
public:
	ShopState();
	~ShopState();

	GameBoard shopBoard;

	void Start()  override;
	void Update() override;
	void Draw()   override;
	void Exit()   override;
};
