#pragma once

namespace AZ
{

	class AZStackMem
	{
	public:
		AZStackMem();
		~AZStackMem();

	private:

	};


	class AZMemManager
	{
	};



	class AZDefaultContainerMem
	{
	public:
		AZDefaultContainerMem()
		{}

		virtual ~AZDefaultContainerMem()
		{}

		virtual void* Allocate()
		{

		}
	};

	// if the class has memory alloc , you must inherit from VSMemObject , so you can use the MemManager any where 
	class VSMemObject
	{
	public:
		VSMemObject();
		~VSMemObject();
		static AZStackMem& GetStackMemManager();
		static AZMemManager& GetMemManager();
		static AZMemManager& GetCMemManager();
	};
}

