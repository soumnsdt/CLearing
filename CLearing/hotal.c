#include<stdio.h>
#include"hotal.h"//包含自定义头文件时，用“”双引号
#define N 4



char hotelName[4][50] = {
	"布丁酒店","南京酒店","常州酒店","金坛酒店"
};

//【1】菜单函数
int Menu(void)
{
	int choice = 0;//用户的选择
	int result; //用户输入酒店后的结果判断  0：表示非法输入   1：表示合法
	printf("请选择您需要入住的酒店：\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%d、%s\n", i + 1, hotelName[i]);
	}
	printf("5、退出程序\n\n");
	printf("您的选择是：");
	result = scanf_s("%d", &choice);

	//【1】当用户输入的值不合法时，要求重新输入
	while (result != 1 || choice < 1 || choice > 5)
	{
		if (result != 1)//如果用户输入的不是数字类型
		{
			scanf_s("%*s");//用来处理非整数的输入。*表示输入项在读入后不赋值给对应的变量
			fflush(stdin); //清空缓冲区，这句话不写也没事，最好也写上这一句
		}
		printf("必须输入1-5之间的整数，请重新输入：");
		result = scanf_s("%d", &choice);
	}
	return choice;
}


//【2】返回用户预订的天数
int GetNights(void)
{
	int nights;//用户输入的预订天数
	int result; //用户输入酒店后的结果判断  0：表示非法输入   1：表示合法
	printf("请输入您要入住的天数：");
	result = scanf_s("%d", &nights);
	while (result != 1)
	{
		scanf_s("%*s");
		fflush(stdin);
		printf("您的输入有误，请重新输入您要入住的天数：");
		result = scanf_s("%d", &nights);
	}
	return nights;
}

//【3】根据房间的单价和入住的天数，来计算用户需要支付的金额
double GetPrice(double price, int nights)
{
	double total = 0;//总价
	for (int i = 0; i < nights; i++)
	{
		total += price;
		price = price * DISCOUNT;
	}
	return total;
}