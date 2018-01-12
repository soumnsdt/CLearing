
#include"Hero.h"

//定义外部变量
extern Hero heros[100];

int main() 
{
	InputHero();
	ShowHero();
	HpAvg();
	system("pause");
	return 0;
}