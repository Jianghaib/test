#include "pch.h"
#include "AZSceneManager.h"
#include "AZResourceManager.h"

namespace AZ
{

	//void AZSceneManager::Update(double dAppTime)
	//{
	//}

	void AZSceneManager::Update(double dAppTime)
	{
		for (unsigned int i = 0; i < m_pScene.GetNum(); i++)
		{
			m_pScene[i]->Update(dAppTime);
			 //AZScene* p = m_pScene[i]; // û�����ز�����
		}

		if(AZResourceManager::ms_bUpdateThread)
		{
			//AZUpdateThreadSys
		}
	}

	void AZSceneManager::Draw(double dAppTime)
	{
		for (unsigned int i = 0; i < m_pViewFamily.)
	}

	//void AZSceneManager::Draw(double dAppTime)
	//{ 
	//}
}
