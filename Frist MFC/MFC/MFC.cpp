#include "stdafx.h"
#include "MFC.h"
#include "CMainDialog.h"


BOOL CFirstApp::InitInstance()//���麯����������������д
{
	MessageBox(NULL, L"�����ҵ�MFC����", L"��ʾ", MB_OK);

	//CDialog dlg(IDD_DIALOG1);//����
	//������̳з���
	CMainDialog dlg;
	dlg.DoModal();//����
	return TRUE;
}


//������
BOOL CFirstApp::ExitInstance()
{
	return 0;//�������ֵ�����ص�WinMain�����ķ���ֵ��
}


//MFC�ĺ��Ķ���ֻ��һ����
//������ȫ�ֱ������ܲ�����,һ���theApp��
CFirstApp theApp;

