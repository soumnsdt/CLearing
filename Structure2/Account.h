#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<stdio.h>
#include<Windows.h>

typedef struct _acount
{
	char * bankName;	//��������
	char * userName;	//�û�����
	double limit;		//�˻����
	double billAmount;	//�����˵�
}Account;

//���㲢���ص���Ӧ������
//������������const�󣬻���ָ����ӵİ�ȫ
double GetRepayment(const Account *account);//����const֮��account�еı����ǲ��ܱ��޸ĵģ�ֻ�ܷ��ʡ�

#endif // !ACCOUNT_H
