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
	//��̬¼��
	for (int i = 0; i < 1; i++)
	{
		printf("��¼���%dλӢ�۵���Ϣ��\n", i + 1);
		heros[i].id = i + 1;
		printf("����:");
		heros[i].name = (char *)malloc(50);
		scanf_s("%s", heros[i].name,50);
		printf("�Ա�:");
		heros[i].sex = (char *)malloc(10);
		scanf_s("%s", heros[i].sex, 10);
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

