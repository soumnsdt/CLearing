#include"Hero.h"

Hero heros[5];
Job jobs[] = {
	{ 1,"��ʦ","����ֵ"},
	{ 2,"սʿ","��" },
	{ 3,"ADC","��������" }
};

void InputHero()
{
	int jobChoice = 0;
	char name[50];
	char sex[10];
	//��̬¼��
	for (int i = 0; i < 1; i++)
	{
		printf("��¼���%dλӢ�۵���Ϣ��\n", i + 1);
		heros[i].id = i + 1;
		printf("����:");
		scanf_s("%s",&name,50);
		heros[i].name = name;
		printf("�Ա�:");
		scanf_s("%s", &sex,10);
		heros[i].sex = sex;
		printf("��ѡ��Ӣ�۵�ְҵ(1-3֮�������)��\n");
		for (int j = 0; j < 3; j++)
		{
			printf("%d��%s\t%s\n", jobs[j].id,jobs[j].name,jobs[j].desc);
		}
		printf("����ѡ���ǣ�");
		scanf_s("%d", &jobChoice);
		printf("¼��ĵ�%dӢ����Ϣ���£�\n",heros[i].id);
		heros[i].Job = jobs[jobChoice - 1];
		printf("���֣�%s\n�Ա�%s\nְҵ��%s\n", heros[i].name, heros[i].sex,heros[i].Job.name);
	}
}
