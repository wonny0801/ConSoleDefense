#pragma once
class ResultState : public cState
{
public:
	ResultState();
	~ResultState();


	void Start()  override;
	void Update() override;
	void Draw()   override;
	void Exit()   override;
};
