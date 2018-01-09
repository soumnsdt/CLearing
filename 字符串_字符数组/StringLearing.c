/*
	字符串：
		"My heart is still."
		1、每个单元占一个字符。
		2、字符串的结尾以"\0"结束。   \0:称之为空字符。   空字符是字符串的终止符，与NULL不同，
		   NULL是一个符号，NULL:表示不引用任何内容的内存地址。
*/
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

//返回传入字符串的长度
int GetStrLength(char[]);
//封装fgets,用来接收字符串的字符数组，接收的字符总数
void GetString(char[], int);

void GetString(char str[],int count)
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
	char str[50] = "jack";
	//fgets(str, 5, stdin);
	puts("please input a string : \n");
	GetString(str, 50);
	int length = GetStrLength(str);
	


	printf("字符串数组的长度为：%d\n", length);

	/*
	//定义字符串的方式
	//字符串和字符数组的区别：最后一位是否为空字符。
	char names1[50] = { 'J','a','c','k','\0' };
	char names2[50] = "Jack";
	printf("names1 = %s\n", names1);
	printf("names2 = %s\n", names2);

	printf("请输入names2新名称：\n");
	//scanf_s("%s", names2, 49);
	//gets(names2);//会造成越界。所以用fgets
	fgets(names2, 5, stdin);//从标准输出流中读取5个字节到数组names2中。  
	//注意：fgets会默认给最后一个元素设置为\n

	//printf("修改后：names2 = %s\n", names2);
	puts(names2);
	*/
	system("pause");
 	return 0;
}