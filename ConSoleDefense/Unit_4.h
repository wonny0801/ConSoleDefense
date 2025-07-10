#pragma once
class U4 : public Unit
{
public:

	U4();
	~U4();

	void Update(std::vector<Unit*> target) override;
	//void Move() override;


};
