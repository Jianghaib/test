#pragma once

///__declspec(dllexport)����Windows�еĶ�̬���У����������������ࡢ����ȹ�������ã�ʡ�Ը���.def�ļ��������������������Ϊ����������������������ã���Ϊ��̬��Ķ���ӿں�������ȡ�
///__declspec��Microsoft VC��ר�õĹؼ��֣��������һЩ���Կ��ԶԱ�׼C/C++��������
#ifdef AZGRAPHICS_EXPORTS
#define AZGRAPHICS_API __declspec(dllexport) 
#endif

namespace AZ
{
	//class AZGraphics
	//{
	//};
}
