#pragma once

#include "AZReference.h"
#include "AZMemObject.h"

namespace AZ
{
	/// <summary>
	///Friend Classes����Ԫ�ࣩ
	///C++�е�friend�ؼ�����ʵ�����������飺��һ������ָ���������ࣨ���ߣ������ܹ�ֱ�ӷ��ʸ����е�private��protected��Ա��
	///�����������ָ����
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
