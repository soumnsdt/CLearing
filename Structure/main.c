/*
	�ṹ���壺
		�ṹ��һ�ֹ����������ͣ���������������϶���
		struct StructName
		{
			//�ṹ��Ա
			DataType var1;
			DataType var2;
			...
		};
		���磺
		struct Hero
		{
			char name[20];
			int level;
			char job[20];
			char skill[20]��
		};
	ע�⣺
		1���ṹ���岢��Ԥ���ڴ�
		2���ṹ����һ����ڳ���Ŀ�ʼ���֣�ͷ�ļ�����֮��
		3���ṹ��������������ṹ����ʽ��ʹ�ýṹ��Ҫ�����ṹ����
*/
#include<stdio.h>
#include<Windows.h>

//�ַ�������
struct Hero
{
	int id;
	char name[50];//Ӣ�۵�����
	int level;//Ӣ�۵ĵȼ�
	int hp;//Ӣ�۵�Ѫ��
	int mp;//Ӣ�۵�ħ��ֵ
	char skill[50];//Ӣ�۵ļ���
};

//ָ������
struct Hero1
{
	int id;
	char * name;//Ӣ�۵�����
	int level;//Ӣ�۵ĵȼ�
	int hp;//Ӣ�۵�Ѫ��
	int mp;//Ӣ�۵�ħ��ֵ
	char * skill;//Ӣ�۵ļ���
};

int main()
{
	//ʹ�ýṹ��
	//����һ��
	//struct Hero hero1 = { 1,"����" ,1,500,0,"��������" };
	/*
	//��������
	struct Hero hero1;
	hero1.id = 1;
	strcpy_s(hero1.name,50, "����");
	hero1.level = 1;
	hero1.hp = 500;
	hero1.mp = 0;
	strcpy_s(hero1.skill,50, "��������");
	*/
	//�������������Ӣ�۵�mp��ֵ
	/*struct Hero hero1 = { 1,"����" ,1,500,.skill="��������" };*/


	struct Hero1 hero1 = { 1,"����",1,500,0,"��������" };
	printf("������Ӣ�۵����ƣ�\n");
	hero1.name = (char *)malloc(50);
	scanf_s("%s", 50, hero1.name);
	printf("%d\t%s\t%d\t%d\t%d\t%s\n\n", hero1.id, hero1.name, hero1.level, hero1.hp, hero1.mp, hero1.skill);

	system("pause");
	return 0;
}