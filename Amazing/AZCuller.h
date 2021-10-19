#pragma once

#include "AZMemObject.h"

namespace AZ
{
	class AZCuller : public AZMemObject
	{

	public :

		enum // CULLER TYPE
		{
			CUT_MAIN,
			CUT_SHADOW,
		    CUT_MAX
		};

		AZCuller();

		virtual ~AZCuller();

		enum 
		{
			VS_MAX_PLANE_NUM = 32
		};

		enum // VisibleSet Type
		{
			VST_BASE,
			VST_ALPHABLEND,
			VST_COMBINE,
			VST_MAX
		};

		enum //Render GROUP
		{
			RG_BACK,
			RG_NORMAL,
			RG_FRONT,
			RG_MAX
		};


	};
}
