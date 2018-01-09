/*
	字符串的复制
*/
#include<stdio.h>
#include<Windows.h>

//返回传入字符串的长度
int GetStrLength(char[]);
//封装fgets,用来接收字符串的字符数组，接收的字符总数
void GetString(char[], int);

void GetString(char str[], int count)
{
	//使用fget函数接收字符串，使用"\0"替换字符数组的最后一位"\n"
	fgets(str, count, stdin);
	//查找\n
	char* find = strchr(str, '\n');//strchr:返回到'\n'字符所在的指针
	if (find)//如果找到了
	{
		*find = '\0';
	}
}


int GetStrLength(char str[])
{
	int count = 0;//字符串的长度
	while (str[count] != '\0')//字符串如果不等于'\0'就代表字符串没有结束
	{
		//if (str[count] == '\n')//用于处理fgets最后一位会自动加上"\n"做处理
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
	strcpy_s(str1, 2, str2);//将字符串str2复制给str1,str2的长度最大20（包括‘\0’）实际19个字节。
	printf("%s\t%s\n\n", str1, str2);

	system("pause");
	return 0;
}