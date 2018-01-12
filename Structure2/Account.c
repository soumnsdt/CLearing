#include"Account.h"

//计算并返回当月应还款金额
//参数中增加了const后，会让指针更加的安全
double GetRepayment( Account *account)//加了const之后，account中的变量是不能被修改的，只能访问。
{
	account->bankName = "中国银行";
	return account->limit - account->billAmount;
}