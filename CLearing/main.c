#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include"hotal.h"

//访问外部文件
extern char hotelName[4][50];

int main()
{
	//【要实现的功能：】用户输入酒店和天数，程序计算出总费用。
	int choice;//用户输入的酒店代号
	int nights;//用户输入的入住酒店的天数
	double totalCost;//用户需要支付的总房费
	double currentCost;//用户当前入住酒店房费的单价

	printf("欢迎您使用本系统！");
	printf("\n=========================================\n");
	printf("女士/先生，你好：\n");
	while ((choice = Menu()) != 5)
	{
		switch (choice)
		{
		case 1://用户入住第一家酒店
			currentCost = HOTEL1;
			break;
		case 2://用户入住第二家酒店
			currentCost = HOTEL2;
			break;
		case 3://用户入住第三家酒店
			currentCost = HOTEL3;
			break;
		case 4://用户入住第四家酒店
			currentCost = HOTEL4;
			break;
		default:
			break;
		}
		//得到用户要入住的天数
		nights = GetNights();
		//计算总费用
		totalCost = GetPrice(currentCost, nights);
		printf("\n=========================================\n");
		printf("您好,您入住酒店的详细信息如下：\n\n");
		printf("入住的酒店为：%s\n", hotelName[choice - 1]);
		printf("入住的天数是：%d天\n", nights);
		printf("您需要支付的总金额为：%.2lf元\n", totalCost);
		printf("=========================================\n\n");
	}
	printf("=========================================\n");
	printf("感谢您的使用！谢谢！\n\n");

	system("pause");
	return 0;
}