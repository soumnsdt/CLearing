#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include"hotal.h"

//�����ⲿ�ļ�
extern char hotelName[4][50];

int main()
{

	int choise;
	//��Ҫʵ�ֵĹ��ܣ����û�����Ƶ�����������������ܷ��á�
	//�˵�����
	choise = menu();
	if (choise > 0 && choise < 5)
	{
		printf("����ǰѡ��ľƵ��ǣ�%s\n", hotelName[choise - 1]);
	}
	system("pause");
}