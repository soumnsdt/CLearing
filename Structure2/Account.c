#include"Account.h"

//���㲢���ص���Ӧ������
//������������const�󣬻���ָ����ӵİ�ȫ
double GetRepayment( Account *account)//����const֮��account�еı����ǲ��ܱ��޸ĵģ�ֻ�ܷ��ʡ�
{
	account->bankName = "�й�����";
	return account->limit - account->billAmount;
}