#include"stdafx.h"
#include"CMainDialog.h"

CMainDialog::CMainDialog() :CDialog(IDD_DIALOG1) {}

//��ʼ������
BOOL CMainDialog::OnInitDialog()
{
	SetWindowText(L"hhhhhh");//��win32��ȣ����˴��ھ��

	//WIN32��WM_SETCURSOR,MFC��װ��һ��
	//���ǵ���WinDows API��ǰ����������޶�::,��ʾ����Windows API

	//��ȡ���     AfxGetApp()->m_hInstance�ǻ��theAPP����
	m_hIcon = ::LoadIcon(AfxGetApp()->m_hInstance, MAKEINTRESOURCE(IDI_ICON1));
	//m_hIcon = theApp.LoadIcon(IDI_ICON1);
	//m_hIcon = ::LoadIcon(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDI_ICON1));
	SetIcon(m_hIcon, TRUE);//��ͼ��
	SetIcon(m_hIcon, FALSE);//Сͼ��

	return TRUE;
}