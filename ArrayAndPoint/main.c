/*
	�����ָ�룺
		������ʽ��ָ����ʽ�Ĳ�ͬ��
			1����ʼ������ʱ��Ѿ�̬�洢�����ַ���������������
			2����ʼ��ָ��ʱֻ���ַ����ĵ�ַ������ָ��
*/
#include<stdio.h>
#include<Windows.h>

int main()
{
	char str[] = "My heart is still.";
	char * ptr_str = "My heart is still.";
	printf("�ַ��������ĵ�ַ��%p\n", "My heart is still.");
	printf("�ַ�������׵�ַ��%p\n", str);
	printf("�ַ�ָ���ȡֵ�ǣ�%p\n", ptr_str);

	system("pause");
	return 0;
}