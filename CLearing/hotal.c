#include<stdio.h>
#include"hotal.h"//�����Զ���ͷ�ļ�ʱ���á���˫����
#define N 4



char hotelName[4][50] = {
	"�����Ƶ�","�Ͼ��Ƶ�","���ݾƵ�","��̳�Ƶ�"
};

//��1���˵�����
int Menu(void)
{
	int choice = 0;//�û���ѡ��
	int result; //�û�����Ƶ��Ľ���ж�  0����ʾ�Ƿ�����   1����ʾ�Ϸ�
	printf("��ѡ������Ҫ��ס�ľƵ꣺\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%d��%s\n", i + 1, hotelName[i]);
	}
	printf("5���˳�����\n\n");
	printf("����ѡ���ǣ�");
	result = scanf_s("%d", &choice);

	//��1�����û������ֵ���Ϸ�ʱ��Ҫ����������
	while (result != 1 || choice < 1 || choice > 5)
	{
		if (result != 1)//����û�����Ĳ�����������
		{
			scanf_s("%*s");//������������������롣*��ʾ�������ڶ���󲻸�ֵ����Ӧ�ı���
			fflush(stdin); //��ջ���������仰��дҲû�£����Ҳд����һ��
		}
		printf("��������1-5֮������������������룺");
		result = scanf_s("%d", &choice);
	}
	return choice;
}


//��2�������û�Ԥ��������
int GetNights(void)
{
	int nights;//�û������Ԥ������
	int result; //�û�����Ƶ��Ľ���ж�  0����ʾ�Ƿ�����   1����ʾ�Ϸ�
	printf("��������Ҫ��ס��������");
	result = scanf_s("%d", &nights);
	while (result != 1)
	{
		scanf_s("%*s");
		fflush(stdin);
		printf("������������������������Ҫ��ס��������");
		result = scanf_s("%d", &nights);
	}
	return nights;
}

//��3�����ݷ���ĵ��ۺ���ס���������������û���Ҫ֧���Ľ��
double GetPrice(double price, int nights)
{
	double total = 0;//�ܼ�
	for (int i = 0; i < nights; i++)
	{
		total += price;
		price = price * DISCOUNT;
	}
	return total;
}