#include"Hero.h"

/*
char name[50];		//Ӣ������
char sex;			//Ӣ���Ա�
char job[20];		//Ӣ��ְҵ
double hp;			//Ӣ������ֵ
double speend;		//�����ٶ�
char ability[20];	//��������
MyTime pubTime;		//����ʱ��
*/
Hero heros[] = {
	{"��",'m',"�̿�",500,0.88,"λ��",{2013,8,8}},
	{ "����",'f',"ADC",375,0.68,"�˺���",{ 2018,1,8 } },
	{ "����",'m',"սʿ",375,0.58,"λ��",{ 2017,1,18 } }
};


void ShowHero()
{
	//���֪���ṹ����Ĵ�С��
	int length = sizeof(heros) / sizeof(Hero);
	for (int i = 0; i < length; i++)
	{
		printf("%s\t%s\t%d-%d-%d\n", heros[i].name, (heros + i)->job, heros[i].pubTime.year, heros[i].pubTime.month, heros[i].pubTime.day);
	}
}