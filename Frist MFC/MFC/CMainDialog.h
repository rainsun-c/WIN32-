#pragma once
//IDD_DIALOG1
//���ڲ���װ��main����
//һ���Ի��򴰿ڶ�Ӧһ����Դ
class CMainDialog :public CDialog
{
private:
	HICON m_hIcon;//��Ա��������m_��ͷ
public:
	CMainDialog();

	//��ʼ������
	BOOL OnInitDialog();

};