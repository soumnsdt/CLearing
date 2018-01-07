#include<stdio.h>
#include"hotal.h"//包含自定义头文件时，用“”双引号
#define N 4



char hotelName[4][50] = {
	"布丁酒店","南京酒店","常州酒店","金坛酒店"
};

int Menu(void)
{
	int choice = 0;//用户的选择
	int result; //用户输入后的结果判断  0：表示非法输入   1：表示合法
	printf("请选择您需要入住的酒店：\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%d、%s\n", i + 1, hotelName[i]);
	}
	printf("5、退出程序\n");
	printf("请输入您的选择：");
	result = scanf_s("%d", &choice);

	//【1】当用户输入的值不合法时，要求重新输入
	while (result != 1 || choice < 1 || choice > 5)
	{
		if (result != 1)//如果用户输入的不是数字类型
		{
			scanf_s("%*s");//用来处理非整数的输入。*表示输入项在读入后不赋值给对应的变量
			//fflush(stdin); //清空缓冲区
		}
		printf("必须输入1-5之间的整数，请重新输入：");
		result = scanf_s("%d", &choice);
	}

	return choice;
}