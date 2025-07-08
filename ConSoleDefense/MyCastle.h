#pragma 
class MyCastle : public Unit
{
public:
	MyCastle();
	~MyCastle();


	void Init() override;
	void Update();
	void Draw() override;
	void Move() override;

	void Upgrade() override;
};
