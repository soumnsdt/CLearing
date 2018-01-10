/*
	将指针指向字符串:
		1、可以指向常亮字符串
		2、也可以指向存储字符串的字符数组
*/
#include<stdio.h>
#include<Windows.h>

int main()
{
	char * words = "My heart is still.";
	words += 9;
	puts(words);

	system("pause");
	return 0;
}