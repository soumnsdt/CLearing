/*
	ָ��ṹ��ָ�룺
		˵����
			1��һ��ָ��ָ��ṹʱ����֮Ϊ�ṹָ�����
			2���ṹָ������е�ֵ����ָ��Ľṹ�������׵�ַ
			3��һ����ʽ��
				struct �ṹ���� * �ṹָ���������
			4�����ʽṹ��Ա��һ����ʽ��
				(1)����*�ṹָ�������.��Ա������
				(2)���ṹָ����� -> ��Ա������

*/
#include<stdio.h>
#include<Windows.h>

//����
struct Martial
{
	int id;           //����id
	char name[50];    //���ɵ�����
	int count;        //��������
	int type;         //���ɵ����� 1-���� 2-���� 3-а��
};

//���
struct Player
{
	int id;
	char name[50];
	int password;		//��ҵĵ�������    
						//int password[50]:int ���鲻��char���飬���ǽ������ݵģ�ÿ��Ԫ�صĿռ䶼��int���͵����ֵ
	char sex[50];				//����Ա�
	struct Martial martial;
};


int main()
{
	struct Player player = { 1,"��֪����",12345,"nan",{2,"lol",500,3} };
	struct Player * ptr_player1 = &player;
	//���ʽṹ��Ա��һ����ʽ��
	//��1��
	printf("%s\t%s\n", (*ptr_player1).name, (*ptr_player1).martial.name);
	//��2��
	printf("%s\t%s\n", ptr_player1->name, ptr_player1->martial.name);


	system("pause");
	return 0;
}