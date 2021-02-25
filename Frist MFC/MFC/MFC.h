#pragma once
class CFirstApp :public CWinApp
{
public:
	//InitInstance 当做我们的入口函数，MFC的初始化函数
	//启动管理，初始化
	BOOL InitInstance();//是虚函数，在派生类中重写

	//清理工作
	BOOL ExitInstance();
};