#include "include.h"

cStateCtrl::cStateCtrl()
{
	//Init();
	m_pCurState = nullptr;
	temp = nullptr;
}

cStateCtrl::~cStateCtrl()
{
	//Init();
}

//bool CStateCtrl::StateAdd(int nIndex, CState* pState)
//{
//	if (m_pStates[nIndex] == NULL)
//	{
//		m_pStates[nIndex] = pState;
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//bool CStateCtrl::StateRelease(int nIndex)
//{
//	if (m_pStates[nIndex] != NULL)
//	{
//		//delete m_pStates[nIndex];
//		m_pStates[nIndex] = NULL;
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}

bool cStateCtrl::StateChange(cState* state)
{
	cState* pState = state; 

	if (pState != NULL)
	{
		if (m_pCurState != NULL)
		{
			m_pCurState->Exit();
			//delete m_pCurState;

		}
		////m_pPrevState = m_pCurState;
		//m_pCurState = pState;
		//m_pCurState->Start();
		temp = state;
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
	if (temp != nullptr)//업데이트랑 드로우 다 끝나고 스테이트 바꿔줘야함...
	{
		if (m_pCurState != nullptr)
		{
			delete m_pCurState;
		}
		m_pCurState = temp;
		m_pCurState->Start();
		temp = nullptr;
	}
}

void cStateCtrl::Draw()
{
	if (m_pCurState != NULL)
	{
		m_pCurState->Draw();
	}
}
