/*
	�ַ�����
		"My heart is still."
		1��ÿ����Ԫռһ���ַ���
		2���ַ����Ľ�β��"\0"������   \0:��֮Ϊ���ַ���   ���ַ����ַ�������ֹ������NULL��ͬ��
		   NULL��һ�����ţ�NULL:��ʾ�������κ����ݵ��ڴ��ַ��
*/
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

//���ش����ַ����ĳ���
int GetStrLength(char[]);

int GetStrLength(char str[])
{
	int count = 0;//�ַ����ĳ���
	while (str[count] != '\0')//�ַ������������'\0'�ʹ����ַ���û�н���
	{
		if (str[count] == '\n')//���ڴ���fgets���һλ���Զ�����"\n"������
		{
			str[count] = '\0';
			break;
		}
		count++;
	}
	return count;
}

int main()
{
	char str[] = "jack";
	fgets(str, 5, stdin);
	int length = GetStrLength(str);
	printf("�ַ�������ĳ���Ϊ��%d\n", length);

	/*
	//�����ַ����ķ�ʽ
	//�ַ������ַ�������������һλ�Ƿ�Ϊ���ַ���
	char names1[50] = { 'J','a','c','k','\0' };
	char names2[50] = "Jack";
	printf("names1 = %s\n", names1);
	printf("names2 = %s\n", names2);

	printf("������names2�����ƣ�\n");
	//scanf_s("%s", names2, 49);
	//gets(names2);//�����Խ�硣������fgets
	fgets(names2, 5, stdin);//�ӱ�׼������ж�ȡ5���ֽڵ�����names2�С�  
	//ע�⣺fgets��Ĭ�ϸ����һ��Ԫ������Ϊ\n

	//printf("�޸ĺ�names2 = %s\n", names2);
	puts(names2);
	*/
	system("pause");
 	return 0;
}