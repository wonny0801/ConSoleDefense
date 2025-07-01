#pragma once
class MenuState : public cState
{
public:
	MenuState();
	~MenuState();

	void Start()  override;
	void Update() override;
	void Draw()   override;
	void Exit()   override;
};