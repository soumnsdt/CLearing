/*
	�ַ����ĸ���
*/
#include<stdio.h>
#include<Windows.h>

//���ش����ַ����ĳ���
int GetStrLength(char[]);
//��װfgets,���������ַ������ַ����飬���յ��ַ�����
void GetString(char[], int);

void GetString(char str[], int count)
{
	//ʹ��fget���������ַ�����ʹ��"\0"�滻�ַ���������һλ"\n"
	fgets(str, count, stdin);
	//����\n
	char* find = strchr(str, '\n');//strchr:���ص�'\n'�ַ����ڵ�ָ��
	if (find)//����ҵ���
	{
		*find = '\0';
	}
}


int GetStrLength(char str[])
{
	int count = 0;//�ַ����ĳ���
	while (str[count] != '\0')//�ַ������������'\0'�ʹ����ַ���û�н���
	{
		//if (str[count] == '\n')//���ڴ���fgets���һλ���Զ�����"\n"������
		//{
		//	str[count] = '\0';
		//	break;
		//}
		count++;
	}
	return count;
}


int main()
{
	char str1[50] = "hello,world!";
	char str2[20];
	printf("Please input a string:");
	GetString(str2, 20);
	strcpy_s(str1, 2, str2);//���ַ���str2���Ƹ�str1,str2�ĳ������20��������\0����ʵ��19���ֽڡ�
	printf("%s\t%s\n\n", str1, str2);

	system("pause");
	return 0;
}