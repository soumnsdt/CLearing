#include<stdio.h>
#include"hotal.h"//�����Զ���ͷ�ļ�ʱ���á���˫����
#define N 4



char hotelName[4][50] = {
	"�����Ƶ�","�Ͼ��Ƶ�","���ݾƵ�","��̳�Ƶ�"
};

int Menu(void)
{
	int choice = 0;//�û���ѡ��
	int result; //�û������Ľ���ж�  0����ʾ�Ƿ�����   1����ʾ�Ϸ�
	printf("��ѡ������Ҫ��ס�ľƵ꣺\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%d��%s\n", i + 1, hotelName[i]);
	}
	printf("5���˳�����\n");
	printf("����������ѡ��");
	result = scanf_s("%d", &choice);

	//��1�����û������ֵ���Ϸ�ʱ��Ҫ����������
	while (result != 1 || choice < 1 || choice > 5)
	{
		if (result != 1)//����û�����Ĳ�����������
		{
			scanf_s("%*s");//������������������롣*��ʾ�������ڶ���󲻸�ֵ����Ӧ�ı���
			//fflush(stdin); //��ջ�����
		}
		printf("��������1-5֮������������������룺");
		result = scanf_s("%d", &choice);
	}

	return choice;
}