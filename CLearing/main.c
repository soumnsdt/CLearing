#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include"hotal.h"

//访问外部文件
extern char hotelName[4][50];

int main()
{

	int choice;
	//【要实现的功能：】用户输入酒店和天数，程序计算出总费用。
	//菜单函数
	choice = Menu();
	if (choice > 0 && choice < 5)
	{
		printf("您当前选择的酒店是：%s\n", hotelName[choice - 1]);
	}
	system("pause");
	return 0;
}