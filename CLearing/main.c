#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include"hotal.h"

//�����ⲿ�ļ�
extern char hotelName[4][50];

int main()
{

	int choice;
	//��Ҫʵ�ֵĹ��ܣ����û�����Ƶ�����������������ܷ��á�
	//�˵�����
	choice = Menu();
	if (choice > 0 && choice < 5)
	{
		printf("����ǰѡ��ľƵ��ǣ�%s\n", hotelName[choice - 1]);
	}
	system("pause");
	return 0;
}