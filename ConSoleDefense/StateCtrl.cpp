#include "include.h"

cStateCtrl::cStateCtrl()
{
	Init();// m_pState[]를 비우기...
}

cStateCtrl::~cStateCtrl()
{
	Init();
}

void cStateCtrl::Init()
{
	for (int i = 0; i < E_STATE_MAX; i++)
	{
		m_pStates[i] = NULL;
	}
}

bool cStateCtrl::StateAdd(int Index, cState* pState)
{
	if (m_pStates[Index] == NULL)
	{
		m_pStates[Index] = pState;
		return true;
	}
	else
	{
		return false;
	}
	
}

bool cStateCtrl::StateRelease(int Index)
{
	if (m_pStates[Index] != NULL)
	{
		m_pStates[Index] = NULL;
		return true;
	}
	else
	{
		return false;
	}
}

bool cStateCtrl::StateChange(int Index)
{
	cState* pState = m_pStates[Index];
	if (pState != NULL)
	{
		if (m_pCurState != NULL)
		{
			m_pCurState->Exit();
		}
		m_pPrevState = m_pCurState;
		m_pCurState = pState;
		m_pCurState->Start();
		return true;
	}
	else
	{
		return false;
	}
}

void cStateCtrl::Update()
{
	if (m_pCurState != NULL)
	{
		m_pCurState->Update();
	}
}

void cStateCtrl::Draw()
{
	if (m_pCurState != NULL)
	{
		m_pCurState->Draw();
	}
}
