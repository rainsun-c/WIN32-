#include"stdafx.h"
#include"CMainDialog.h"

CMainDialog::CMainDialog() :CDialog(IDD_DIALOG1) {}

//初始化函数
BOOL CMainDialog::OnInitDialog()
{
	SetWindowText(L"hhhhhh");//与win32相比，少了窗口句柄

	//WIN32是WM_SETCURSOR,MFC封装了一个
	//凡是调用WinDows API，前面加作用域限定::,表示调用Windows API

	//获取句柄     AfxGetApp()->m_hInstance是获得theAPP对象
	m_hIcon = ::LoadIcon(AfxGetApp()->m_hInstance, MAKEINTRESOURCE(IDI_ICON1));
	//m_hIcon = theApp.LoadIcon(IDI_ICON1);
	//m_hIcon = ::LoadIcon(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDI_ICON1));
	SetIcon(m_hIcon, TRUE);//大图标
	SetIcon(m_hIcon, FALSE);//小图标

	return TRUE;
}