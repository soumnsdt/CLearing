/*
	结构作为函数参数的三种方式：
		1、传递结构成员
		2、传递结构
			优点：函数处理的是原始数据的副本，保护了原始数据。
			缺点：老版本不支持；传递结构浪费时间和存储空间。
			一般用来处理小型结构数据。
		3、传递结构的地址
			优点：程序的执行速度快，效率高。
			缺点：无法保护数据，函数中的操作有可能会意外影响原结构中的数据
			程序员为了追求效率，常用此方法。
		例如：
		//信用卡账户
		struct Account
		{
			char * bankName;	//银行名称
			char * userName;	//用户名称
			double limit;		//账户额度
			double billAmount;	//当月账单
		};
		//计算并返回当月应还款金额
		double GetRepayment(const struct Account *account)
		{
			return account->limit - account->billAmount;
		}
		void main()
		{
			struct Account zsAcc;
			zsAcc.bankName = "招商银行";
			zsAcc.userName = "DT";
			zsAcc.limit = 1000000;
			zsAcc.billAmount = 100000;
			double result = GetRepayment(&zsAcc);
			printf("本月应还款：%.2lf元。\n",result);
		}
*/
#include"Account.h"


int main()
{
	Account account;
	account.bankName = "招商银行";
	account.userName = "DT";
	account.limit = 1000000;
	account.billAmount = 100000;
	Account account1 = { "建设银行","女朋友",5000,2000 };
	double result = GetRepayment(&account1);
	printf("本月应还款：%.2lf万元。\n", result/10000);
	printf("默认银行是：%s\n", account1.bankName);
	system("pause");
	return 0;
}