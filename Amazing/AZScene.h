#pragma once
#include "AZObject.h"
#include "AZNode.h"
#include "AZArray.h"
#include <AZLight.h>
#include <AZCamera.h>
#include <AZCuller.h>

namespace AZ
{
	class AZScene : public AZObject
	{

	public:
		void Update(double dAppTime);

		void CollectUpdateInfo();

		AZScene();

		~AZScene();

		inline AZLight* GetAllLight(unsigned int i)const;

		inline unsigned int GetAllLightNum()const;

		virtual void AddObject(AZNode* pObject);

		virtual void DeleteObject(AZNode* pObject);

		virtual void DeleteAllObject();

		virtual void ComputeVisibleSet(AZCuller* Culler, bool bNoCull, double dAppTime);

		bool Build();

		inline bool IsBuild()
		{
			return m_bIsBuild;
		}

	protected:

		AZArray <AZLight*> m_pAllLight;

		AZArray<AZCamera*> m_pAllCamera;

		AZArray<AZNode*> m_pDynamic;
		AZArray<AZNode*> m_ObjectNodes;

		bool m_bIsBuild;
	};
}
