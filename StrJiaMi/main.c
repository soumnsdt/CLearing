/*
	���ܣ�ʵ���ַ����ļ��ܺͽ���
	���ܷ�ʽ�����ַ�����ÿ���ַ����������ַ����е�λ�ú�һ��ƫ����
	���磺xuetang9�У���һ���ַ����е�λ��Ϊ0����ô��Ӧ�������ǡ�x��+0+5
*/
#include<stdio.h>
#include<Windows.h>

#define KEY 5;//ƫ����/��Կ

//���ܴ�����ַ���
//����1��Ҫ���ܵ��ַ���
//����ֵ�����ؼ��ܺ���ַ���
char * encrypt(char []);
//���ܴ�����ַ���
//����1��Ҫ���ܵ��ַ���
//����ֵ�����ؽ��ܺ���ַ���
char * dencrypt(char[]);


int main()
{
	char password[50] = "123456";
	encrypt(password);
	printf("���ܺ������Ϊ��%s\n\n", password);
	dencrypt(password);
	printf("���ܺ������Ϊ��%s\n\n", password);

	system("pause");
	return 0;
}

char * encrypt(char password[])
{
	int count = strlen(password);//�ַ����ĳ���
	for (int i = 0; i < count; i++)
	{
		//���ַ�����ÿ���ַ����������ַ����е�λ�ú�һ��ƫ����5
		password[i] = password[i] + i + KEY;
	}
	return password;
}

char * dencrypt(char password[])
{
	int count = strlen(password);//�ַ����ĳ���
	for (int i = 0; i < count; i++)
	{
		//���ַ�����ÿ���ַ����������ַ����е�λ�ú�һ��ƫ����5
		password[i] = password[i] - i - KEY;
	}
	return password;
}