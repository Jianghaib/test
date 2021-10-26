#pragma once
#include "AZContainer.h"

namespace AZ
{

	template<class T, class AZMemManagerClass = AZDefaultContainerMem>
	class AZArray : public AZContainer <T, AZMemManagerClass>
	{
	public:
		enum
		{
			DEFAULT_GROWBY = 10
		};

		AZArray(unsigned int uiGrowBy = DEFAULT_GROWBY);

		~AZArray();

		AZArray(const AZArray <T, AZMemManagerClass>& Array);

		void operator= (const AZArray<T, AZMemManager>& Array);

		inline unsigned int GetNum() const;

		inline unsigned int GetBufferNum() const;

		inline void SetGrowBy(unsigned int uiGrowBy);


		T& operator[]  (unsigned int i) const;
	};

	/*template<class T, class AZMemManagerClass>
	inline AZArray<T, AZMemManagerClass>::AZArray(unsigned int uiGrowBy)
	{
	}*/

}
