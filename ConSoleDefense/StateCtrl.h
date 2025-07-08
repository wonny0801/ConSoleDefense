#pragma once
class cStateCtrl
{
public:
	cState* m_pCurState;
	cState* temp;// 
	//CState* m_pPrevState;			

	//CState* m_pStates[E_STATE_MAX];

public:
	cStateCtrl();
	~cStateCtrl();

public:
	//void Init();
	//bool StateAdd(int nIndex, CState* pState);
	//bool StateRelease(int nIndex);
	bool StateChange(cState* state);

public:
	void Update();
	void Draw();
};
