/*
	数组和指针：
		数组形式和指针形式的不同：
			1、初始化数组时会把静态存储区的字符串拷贝到数组中
			2、初始化指针时只把字符串的地址拷贝给指针
*/
#include<stdio.h>
#include<Windows.h>

int main()
{
	char str[] = "My heart is still.";
	char * ptr_str = "My heart is still.";
	printf("字符串常量的地址：%p\n", "My heart is still.");
	printf("字符数组的首地址：%p\n", str);
	printf("字符指针的取值是：%p\n", ptr_str);

	system("pause");
	return 0;
}