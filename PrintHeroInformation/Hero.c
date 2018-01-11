#include"Hero.h"

/*
char name[50];		//英雄名称
char sex;			//英雄性别
char job[20];		//英雄职业
double hp;			//英雄生命值
double speend;		//攻击速度
char ability[20];	//特殊能力
MyTime pubTime;		//上线时间
*/
Hero heros[] = {
	{"劫",'m',"刺客",500,0.88,"位移",{2013,8,8}},
	{ "寒冰",'f',"ADC",375,0.68,"伤害高",{ 2018,1,8 } },
	{ "亚索",'m',"战士",375,0.58,"位移",{ 2017,1,18 } }
};


void ShowHero()
{
	//如何知道结构数组的大小？
	int length = sizeof(heros) / sizeof(Hero);
	for (int i = 0; i < length; i++)
	{
		printf("%s\t%s\t%d-%d-%d\n", heros[i].name, (heros + i)->job, heros[i].pubTime.year, heros[i].pubTime.month, heros[i].pubTime.day);
	}
}