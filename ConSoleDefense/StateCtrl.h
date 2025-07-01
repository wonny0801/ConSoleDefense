#pragma once
class cStateCtrl
{
public:
	cState* m_pCurState; // 현재 화면...
	cState* m_pPrevState;// 이전 화면...

	cState* m_pStates[E_STATE_MAX];

	cStateCtrl();
	~cStateCtrl();

public:
	void Init();
	bool StateAdd(int Index, cState* pState); // 스테이트 추가하기...
	bool StateRelease(int Index); // 스테이트 비우기...
	bool StateChange(int Index); // 현재 보고있는 화면 바꾸기... 즉, 다음화면으로 이동

public:
	void Update();
	void Draw();
};
