#include<stdio.h>
#include"hotal.h"//�����Զ���ͷ�ļ�ʱ���á���˫����
#define N 4



char hotelName[4][50] = {
	"�����Ƶ�","�Ͼ��Ƶ�","���ݾƵ�","��̳�Ƶ�"
};

int menu()
{
	int choise = 0;
	printf("��ѡ������Ҫ��ס�ľƵ꣺\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%d��%s\n", i + 1, hotelName[i]);
	}
	printf("����������ѡ��");
	scanf_s("%d", &choise);
	return choise;
}