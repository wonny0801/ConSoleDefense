#pragma once
class U3 : public Unit
{
public:

	U3();
	~U3();

	void Update(std::vector<Unit*> target) override;
	//void Move() override;


};
