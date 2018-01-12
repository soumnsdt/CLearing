#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<stdio.h>
#include<Windows.h>

typedef struct _acount
{
	char * bankName;	//银行名称
	char * userName;	//用户名称
	double limit;		//账户额度
	double billAmount;	//当月账单
}Account;

//计算并返回当月应还款金额
//参数中增加了const后，会让指针更加的安全
double GetRepayment(const Account *account);//加了const之后，account中的变量是不能被修改的，只能访问。

#endif // !ACCOUNT_H
