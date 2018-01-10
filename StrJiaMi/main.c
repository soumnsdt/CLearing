/*
	功能：实现字符串的加密和解密
	加密方式：将字符串中每个字符加上它在字符串中的位置和一个偏移量
	例如：xuetang9中，第一个字符串中的位置为0，那么对应的密文是‘x’+0+5
*/
#include<stdio.h>
#include<Windows.h>

#define KEY 5;//偏移量/秘钥

//加密传入的字符串
//参数1：要加密的字符串
//返回值：返回加密后的字符串
char * encrypt(char []);
//解密传入的字符串
//参数1：要解密的字符串
//返回值：返回解密后的字符串
char * dencrypt(char[]);


int main()
{
	char password[50] = "123456";
	encrypt(password);
	printf("加密后的密码为：%s\n\n", password);
	dencrypt(password);
	printf("解密后的密码为：%s\n\n", password);

	system("pause");
	return 0;
}

char * encrypt(char password[])
{
	int count = strlen(password);//字符串的长度
	for (int i = 0; i < count; i++)
	{
		//将字符串中每个字符加上它在字符串中的位置和一个偏移量5
		password[i] = password[i] + i + KEY;
	}
	return password;
}

char * dencrypt(char password[])
{
	int count = strlen(password);//字符串的长度
	for (int i = 0; i < count; i++)
	{
		//将字符串中每个字符加上它在字符串中的位置和一个偏移量5
		password[i] = password[i] - i - KEY;
	}
	return password;
}