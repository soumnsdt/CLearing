#include"Hero.h"

Hero heros[5];
Job jobs[] = {
	{ 1,"法师","法力值"},
	{ 2,"战士","肉" },
	{ 3,"ADC","攻击力高" }
};

void InputHero()
{
	int jobChoice = 0;
	//动态录入
	for (int i = 0; i < 1; i++)
	{
		printf("请录入第%d位英雄的信息：\n", i + 1);
		heros[i].id = i + 1;
		printf("名称:");
		heros[i].name = (char *)malloc(50);
		scanf_s("%s", heros[i].name,50);
		printf("性别:");
		heros[i].sex = (char *)malloc(10);
		scanf_s("%s", heros[i].sex, 10);
		printf("请选择英雄的职业(1-3之间的整数)：\n");
		for (int j = 0; j < 3; j++)
		{
			printf("%d、%s\t%s\n", jobs[j].id,jobs[j].name,jobs[j].desc);
		}
		printf("您的选择是：");
		scanf_s("%d", &jobChoice);
		printf("录入的第%d英雄信息如下：\n",heros[i].id);
		heros[i].Job = jobs[jobChoice - 1];
		printf("名字：%s\n性别：%s\n职业：%s\n", heros[i].name, heros[i].sex,heros[i].Job.name);
	}
}

