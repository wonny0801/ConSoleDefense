#pragma once
#include "Player.h"
class GameMng : public Singleton<GameMng>
{
public:
	GameMng();
	~GameMng();

	cStateCtrl cstateCtrl;

	Player player;
	GameBoard gameboard;
	
	


	void Init();
	void Update();
	void Draw();
	
};
