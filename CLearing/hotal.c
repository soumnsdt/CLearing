#include<stdio.h>
#include"hotal.h"//包含自定义头文件时，用“”双引号
#define N 4



char hotelName[4][50] = {
	"布丁酒店","南京酒店","常州酒店","金坛酒店"
};

int menu()
{
	int choise = 0;
	printf("请选择您需要入住的酒店：\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%d、%s\n", i + 1, hotelName[i]);
	}
	printf("请输入您的选择：");
	scanf_s("%d", &choise);
	return choise;
}