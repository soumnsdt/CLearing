#include<stdio.h>
#include"hotal.h"//�����Զ���ͷ�ļ�ʱ���á���˫����
#define N 4



char hotelName[4][50] = {
	"�����Ƶ�","�Ͼ��Ƶ�","���ݾƵ�","��̳�Ƶ�"
};

int menu(void)
{
	int choise = 0;//�û���ѡ��
	int result; //�û������Ľ���ж�  0����ʾ�Ƿ�����   1����ʾ�Ϸ�
	printf("��ѡ������Ҫ��ס�ľƵ꣺\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%d��%s\n", i + 1, hotelName[i]);
	}
	printf("����������ѡ��");

	//��1�����û������ֵ���Ϸ�ʱ��Ҫ����������
	while ((result = scanf_s("%d",&choise))!=1 || choise < 1 || choise>5)
	{
		if (result != 1)//����û�����Ĳ�����������
		{
			scanf_s("%*s");//������������������롣*��ʾ�������ڶ���󲻸�ֵ����Ӧ�ı���
			fflush(stdin); //��ջ�����
		}
		printf("��������1-4֮������������������룺");
	}
	scanf_s("%d", &choise);
	

	return choise;
}