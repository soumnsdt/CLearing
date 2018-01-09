/*
	字符串的连接：
		strcat();
*/
#include<stdio.h>
#include<Windows.h>

int main()
{
	char str1[100] = "你好，中国！";
	char str2[20] = "你好，美国！";
	strcat_s(str1,30, str2);
	printf("str1:%s\tstr2:%s\n\n", str1, str2);

	system("pause");
	return 0;
}