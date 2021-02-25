#include "stdafx.h"
#include "MFC.h"
#include "CMainDialog.h"


BOOL CFirstApp::InitInstance()//是虚函数，在派生类中重写
{
	MessageBox(NULL, L"这是我的MFC程序", L"提示", MB_OK);

	//CDialog dlg(IDD_DIALOG1);//创建
	//派生类继承方法
	CMainDialog dlg;
	dlg.DoModal();//弹出
	return TRUE;
}


//清理工作
BOOL CFirstApp::ExitInstance()
{
	return 0;//这个返回值，返回到WinMain函数的返回值。
}


//MFC的核心对象（只有一个）
//不定义全局变量，跑不起来,一般叫theApp，
CFirstApp theApp;

