/*
	结构定义：
		结构是一种构造数据类型，由若干数据项组合而成
		struct StructName
		{
			//结构成员
			DataType var1;
			DataType var2;
			...
		};
		例如：
		struct Hero
		{
			char name[20];
			int level;
			char job[20];
			char skill[20]；
		};
	注意：
		1、结构定义并不预留内存
		2、结构定义一般放在程序的开始部分（头文件声明之后）
		3、结构定义仅用来描述结构的形式，使用结构需要声明结构变量
*/
#include<stdio.h>
#include<Windows.h>

//字符串数组
struct Hero
{
	int id;
	char name[50];//英雄的名称
	int level;//英雄的等级
	int hp;//英雄的血量
	int mp;//英雄的魔法值
	char skill[50];//英雄的技能
};

//指针数组
struct Hero1
{
	int id;
	char * name;//英雄的名称
	int level;//英雄的等级
	int hp;//英雄的血量
	int mp;//英雄的魔法值
	char * skill;//英雄的技能
};

int main()
{
	//使用结构体
	//方法一：
	//struct Hero hero1 = { 1,"盖伦" ,1,500,0,"德玛西亚" };
	/*
	//方法二：
	struct Hero hero1;
	hero1.id = 1;
	strcpy_s(hero1.name,50, "盖伦");
	hero1.level = 1;
	hero1.hp = 500;
	hero1.mp = 0;
	strcpy_s(hero1.skill,50, "德玛西亚");
	*/
	//方法三：不想给英雄的mp赋值
	/*struct Hero hero1 = { 1,"盖伦" ,1,500,.skill="德玛西亚" };*/


	struct Hero1 hero1 = { 1,"盖伦",1,500,0,"德玛西亚" };
	printf("请输入英雄的名称：\n");
	hero1.name = (char *)malloc(50);
	scanf_s("%s", 50, hero1.name);
	printf("%d\t%s\t%d\t%d\t%d\t%s\n\n", hero1.id, hero1.name, hero1.level, hero1.hp, hero1.mp, hero1.skill);

	system("pause");
	return 0;
}