#pragma once

#include "AZGraphics.h"

namespace AZ
{
	class AZReference
	{
		AZReference();
		virtual ~AZReference();

		void IncreRef();

		void DecreRef();

		int m_iReference;
	};
}
