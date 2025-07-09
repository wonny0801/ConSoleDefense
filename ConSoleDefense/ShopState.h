#pragma once
class ShopState : public cState
{
public:
	ShopState();
	~ShopState();


	void Start()  override;
	void Update() override;
	void Draw()   override;
	void Exit()   override;

	void UnitUpgrade();
};
