#pragma once

#include "AZMemObject.h"
#include "AZArray.h"
#include <AZScene.h>

namespace AZ
{
	class AZSceneManager : public AZMemObject
	{
	public:

		void Update(double dAppTime);

		void Draw(double dAppTime);

	protected :
		AZArray<AZScene*> m_pScene;
		AZArray<AZViewFamilly> m_pViewFamily;
	};
}
