/*
	һ��ʹ�ýṹ��
		1������ṹ���͵�ͬʱ�������ṹ����
			#include<stdio.h>
			struct Hero
			{
				char * name;
				int level;
				char * job;
				char * skill;
			}GY,DT,GL;

		2��ֱ�������ṹ����
			#include<stdio.h>
			struct
			{
				char * name;
				int level;
				char * job;
				char * skill;
			}GY,DT,GL;

	����Ƕ�׽ṹ
		
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
	//����1:
	/*struct Martial martial = { 3,"lol",500,3 };
	struct Player player = { 1,"��֪����" ,12345 ,"��" , martial };*/
	
	//����2:
	struct Player player;
	struct Martial martial1 = { 3,"lol",500,3 };
	player.id = 1;
	player.name[50] = "��֪����";
	player.password = 12345;
	player.sex[50] = "nan";
	player.martial = martial1;
	

	printf("%s\n", player.martial.name);

	system("pause");
	return 0;
}