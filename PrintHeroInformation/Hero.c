/*
	�ṹ���鶨�壺
	Ԫ��Ϊ�ṹ���͵������Ϊ�ṹ���顣
	��1��������typedef
	struct Role
	{
	char * name;
	int age;
	char * job;
	char * skill;
	}roles[25];
	struct Role roles[25];

	��2��ֱ�ӳ�ʼ��
	struct Role
	{
	char * name;
	int age;
	char * job;
	char * skill;
	}roles[] = {
	{"��ܽ��"��29��"���ӵ�","��ɽ����"},
	{"�����"��30��"�˷�","������Ի��"}
	};

	֪ʶ�㣺
	getch()��getchar()��һ���س�
*/
#include"Hero.h"

Hero heros[100] = {
	{"��",'m',"�̿�",500,0.88,"λ��",{2013,8,8}},
	{ "����",'f',"ADC",375,0.68,"�˺���",{ 2018,1,8 } },
	{ "����",'m',"սʿ",375,0.58,"λ��",{ 2017,1,18 } }
};

int count = 3;//��ǰ��Ӣ������

//��̬¼��Ӣ�۵���Ϣ
void InputHero()
{
	//��1������¼������
	//��2����һ��¼�����֮��ѯ���Ƿ����¼��
	char answer = 'y';
	do
	{
		if (count == 100)
		{
			printf("Ӣ�۵���λ�������뵽�̳ǹ���");
			break;
		}
		printf("��ǰ¼���%dλӢ�۵���Ϣ��\n", count + 1);
		printf("Ӣ�����ƣ�");
		heros[count].name = (char *)malloc(50);
		scanf_s("%s", heros[count].name,50);//��heros[count].name������50���ַ�ָ��Ŀռ䣬������һ����ַ�ˣ���scanf�в���Ҫ��ȡַ��&
		printf("Ӣ���Ա�(f-Ů/m-��)��");
		scanf_s("%*s");	//¼���ַ�֮ǰһ��Ҫ�������ڴ�
		fflush(stdin);
		heros[count].sex = getchar();
		fflush(stdin);
		printf("Ӣ��ְҵ��");
		heros[count].job = (char *)malloc(50);
		scanf_s("%s", heros[count].job,50);
		printf("Ӣ������ֵ��");
		scanf_s("%lf", &heros[count].hp);
		printf("�����ٶȣ�");
		scanf_s("%lf", &heros[count].speend);
		printf("����������");
		heros[count].ability = (char *)malloc(50);
		scanf_s("%s", heros[count].ability,50);
		printf("����ʱ��(#-#-#)��");
		scanf_s("%d-%d-%d", &heros[count].pubTime.year,&heros[count].pubTime.month,&heros[count].pubTime.day);
		
		count++;//¼����Ӣ��֮������+1
		printf("�Ƿ����¼��Ӣ����Ϣ����y/n��");
		answer = getch();
		printf("\n");
	} while (answer == 'y' || answer == 'Y');
}


//��ʾӢ�۵���Ϣ
void ShowHero()
{
	//���֪���ṹ����Ĵ�С��
	//int length = sizeof(heros) / sizeof(Hero);
	for (int i = 0; i < count; i++)
	{
		printf("%s\t\t%s\t\t%d-%d-%d\n", heros[i].name, (heros + i)->job, heros[i].pubTime.year, heros[i].pubTime.month, heros[i].pubTime.day);
	}
}


//��ʾ����Ӣ������ֵ��ƽ��ֵ
void HpAvg()
{
	double HpOfSum = 0;//����Ӣ������ֵ�ܺ�
	double HpOfAvg = 0;//Ӣ�۵�ƽ������ֵ
	for (int i = 0; i < count; i++)
	{
		HpOfSum += (heros + i)->hp;
		HpOfAvg = HpOfSum / count;
	}
	printf("Ӣ�۵�ƽ������ֵΪ��%.2lf\n", HpOfAvg);
}