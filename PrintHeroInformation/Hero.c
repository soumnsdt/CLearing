/*
	结构数组定义：
	元素为结构类型的数组称为结构数组。
	例1：可以用typedef
	struct Role
	{
	char * name;
	int age;
	char * job;
	char * skill;
	}roles[25];
	struct Role roles[25];

	例2：直接初始化
	struct Role
	{
	char * name;
	int age;
	char * job;
	char * skill;
	}roles[] = {
	{"郭芙蓉"，29，"打杂的","排山倒海"},
	{"吕秀才"，30，"账房","子曾经曰过"}
	};

	知识点：
	getch()比getchar()少一个回车
*/
#include"Hero.h"

Hero heros[100] = {
	{"劫",'m',"刺客",500,0.88,"位移",{2013,8,8}},
	{ "寒冰",'f',"ADC",375,0.68,"伤害高",{ 2018,1,8 } },
	{ "亚索",'m',"战士",375,0.58,"位移",{ 2017,1,18 } }
};

int count = 3;//当前的英雄总数

//动态录入英雄的信息
void InputHero()
{
	//【1】首先录入内容
	//【2】第一个录入完毕之后，询问是否继续录入
	char answer = 'y';
	do
	{
		if (count == 100)
		{
			printf("英雄的栏位已满，请到商城购买！");
			break;
		}
		printf("当前录入第%d位英雄的信息：\n", count + 1);
		printf("英雄名称：");
		heros[count].name = (char *)malloc(50);
		scanf_s("%s", heros[count].name,50);//给heros[count].name开辟了50个字符指针的空间，他就是一个地址了，在scanf中不需要加取址符&
		printf("英雄性别(f-女/m-男)：");
		scanf_s("%*s");	//录入字符之前一定要先清理内存
		fflush(stdin);
		heros[count].sex = getchar();
		fflush(stdin);
		printf("英雄职业：");
		heros[count].job = (char *)malloc(50);
		scanf_s("%s", heros[count].job,50);
		printf("英雄生命值：");
		scanf_s("%lf", &heros[count].hp);
		printf("攻击速度：");
		scanf_s("%lf", &heros[count].speend);
		printf("特殊能力：");
		heros[count].ability = (char *)malloc(50);
		scanf_s("%s", heros[count].ability,50);
		printf("上线时间(#-#-#)：");
		scanf_s("%d-%d-%d", &heros[count].pubTime.year,&heros[count].pubTime.month,&heros[count].pubTime.day);
		
		count++;//录入完英雄之后总数+1
		printf("是否继续录入英雄信息？（y/n）");
		answer = getch();
		printf("\n");
	} while (answer == 'y' || answer == 'Y');
}


//显示英雄的信息
void ShowHero()
{
	//如何知道结构数组的大小？
	//int length = sizeof(heros) / sizeof(Hero);
	for (int i = 0; i < count; i++)
	{
		printf("%s\t\t%s\t\t%d-%d-%d\n", heros[i].name, (heros + i)->job, heros[i].pubTime.year, heros[i].pubTime.month, heros[i].pubTime.day);
	}
}


//显示所有英雄生命值的平均值
void HpAvg()
{
	double HpOfSum = 0;//所有英雄生命值总和
	double HpOfAvg = 0;//英雄的平均生命值
	for (int i = 0; i < count; i++)
	{
		HpOfSum += (heros + i)->hp;
		HpOfAvg = HpOfSum / count;
	}
	printf("英雄的平均生命值为：%.2lf\n", HpOfAvg);
}