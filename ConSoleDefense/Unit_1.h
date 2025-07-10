#pragma once
class U1 : public Unit
{
public:

	U1();
	~U1();

	void Update(std::vector<Unit*> target) override;
	//void Move() override;


};
