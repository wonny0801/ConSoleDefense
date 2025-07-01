#pragma once
class GameMng : public Singleton<GameMng>
{
public:
	GameMng();
	~GameMng();

	cStateCtrl cstateCtrl;

	Player player;

	void Init();
	void Update();
	void Draw();
	
};
