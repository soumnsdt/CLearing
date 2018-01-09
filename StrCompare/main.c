/*
	字符串的比较：
		将两个字符串从首字母开始，按照ASCII码的顺序进行逐个比较
*/
#include<stdio.h>
#include<windows.h>

#define USER_NAME "admin"
#define USER_PASSWORD "admin"

//验证传入的用户名和密码是否正确
//参数1：需要验证的用户名
//参数2：需要验证的密码
//返回：如果用户名和密码正确，返回1，否则返回0
int login(char[], char[]);

//封装fgets,用来接收字符串的字符数组，接收的字符总数
void MyFgets(char[], int);

int main()
{
	char userName[50];
	char password[50];
	int count = 0;//用户还可输入错误次数
	for (int i = 0; i < 3; i++)
	{
		printf("请输入用户名：\n");
		MyFgets(userName, 50);
		printf("请输入密码：\n");
		MyFgets(password, 50);

		if (login(userName, password))
		{
			printf("恭喜您，登入系统成功！\n\n");
			break;
		}
		else
		{
			count++;
			if ((3 - count) == 0)
			{
				printf("对不起，您的用户名或密码输入次数已达上限！请于24小时之后再试！\n\n");
				break;
			}
			printf("对不起，您的用户名或密码输入有误，请重新输入！\n");
			printf("今日总共3次机会，你还有%d次机会！\n", 3 - count);
			printf("===============================================================\n\n");
		}
	}
	printf("感谢您使用本系统，谢谢！\n\n");
	

	system("pause");
	return 0;
}

int login(char userName[], char password[])
{
	int result = 0;
	//strcmp:比较两个字符串是否相等，相等返回0，不等返回1.
	if (strcmp(USER_NAME, userName) == 0 && strcmp(USER_PASSWORD, password) == 0)
	{
		//验证合法
		result = 1;
	}
	return result;
}



void MyFgets(char str[], int count)
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