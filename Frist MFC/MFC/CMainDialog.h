#pragma once
//IDD_DIALOG1
//在内部封装了main函数
//一个对话框窗口对应一个资源
class CMainDialog :public CDialog
{
private:
	HICON m_hIcon;//成员变量都以m_开头
public:
	CMainDialog();

	//初始化函数
	BOOL OnInitDialog();

};