/*
	�ַ����ıȽϣ�
		�������ַ���������ĸ��ʼ������ASCII���˳���������Ƚ�
*/
#include<stdio.h>
#include<windows.h>

#define USER_NAME "admin"
#define USER_PASSWORD "admin"

//��֤������û����������Ƿ���ȷ
//����1����Ҫ��֤���û���
//����2����Ҫ��֤������
//���أ�����û�����������ȷ������1�����򷵻�0
int login(char[], char[]);

//��װfgets,���������ַ������ַ����飬���յ��ַ�����
void MyFgets(char[], int);

int main()
{
	char userName[50];
	char password[50];
	int count = 0;//�û���������������
	for (int i = 0; i < 3; i++)
	{
		printf("�������û�����\n");
		MyFgets(userName, 50);
		printf("���������룺\n");
		MyFgets(password, 50);

		if (login(userName, password))
		{
			printf("��ϲ��������ϵͳ�ɹ���\n\n");
			break;
		}
		else
		{
			count++;
			if ((3 - count) == 0)
			{
				printf("�Բ��������û�����������������Ѵ����ޣ�����24Сʱ֮�����ԣ�\n\n");
				break;
			}
			printf("�Բ��������û��������������������������룡\n");
			printf("�����ܹ�3�λ��ᣬ�㻹��%d�λ��ᣡ\n", 3 - count);
			printf("===============================================================\n\n");
		}
	}
	printf("��л��ʹ�ñ�ϵͳ��лл��\n\n");
	

	system("pause");
	return 0;
}

int login(char userName[], char password[])
{
	int result = 0;
	//strcmp:�Ƚ������ַ����Ƿ���ȣ���ȷ���0�����ȷ���1.
	if (strcmp(USER_NAME, userName) == 0 && strcmp(USER_PASSWORD, password) == 0)
	{
		//��֤�Ϸ�
		result = 1;
	}
	return result;
}



void MyFgets(char str[], int count)
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