#pragma once
class cState
{
public:
	cState(); // cpp 생성자에서는 두 변수 초기화만... 
	~cState();
public:
	int m_StateIndex; // 현재 State 인덱스번호...
	cState* m_pCurState; // 현재 State...  자기자신을 가리키게...
public:
	virtual void Start() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void Exit() = 0;
};
