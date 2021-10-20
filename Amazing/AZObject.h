#pragma once

#include "AZReference.h"
#include "AZMemObject.h"

namespace AZ
{
	/// <summary>
	///Friend Classes（友元类）
	///C++中的friend关键字其实做这样的事情：在一个类中指明其他的类（或者）函数能够直接访问该类中的private和protected成员。
	///你可以这样来指明：
	///friend class aClass
	/// </summary>
	class AZObject : public AZReference, public AZMemObject
	{

	public:
		virtual ~AZObject() = 0;
	//	AZObject(const AZObject& object);
	//	AZObject& operator=(const AZObject& object);
		AZObject();
	};
}
