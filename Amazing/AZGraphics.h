#pragma once

///__declspec(dllexport)用于Windows中的动态库中，声明导出函数、类、对象等供外面调用，省略给出.def文件。即将函数、类等声明为导出函数，供其它程序调用，作为动态库的对外接口函数、类等。
///__declspec是Microsoft VC中专用的关键字，它配合着一些属性可以对标准C/C++进行扩充
#ifdef AZGRAPHICS_EXPORTS
#define AZGRAPHICS_API __declspec(dllexport) 
#endif

namespace AZ
{
	//class AZGraphics
	//{
	//};
}
