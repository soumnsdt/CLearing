/*
	指向结构的指针：
		说明：
			1、一个指针指向结构时，称之为结构指针变量
			2、结构指针变量中的值是所指向的结构变量的首地址
			3、一般形式：
				struct 结构名称 * 结构指针变量名；
			4、访问结构成员的一般形式：
				(1)、（*结构指针变量）.成员变量名
				(2)、结构指针变量 -> 成员变量名

*/
#include<stdio.h>
#include<Windows.h>

//门派
struct Martial
{
	int id;           //门派id
	char name[50];    //门派的名称
	int count;        //门派人数
	int type;         //门派的类型 1-正派 2-中立 3-邪派
};

//玩家
struct Player
{
	int id;
	char name[50];
	int password;		//玩家的登入密码    
						//int password[50]:int 数组不像char数组，他是接收数据的，每个元素的空间都是int类型的最大值
	char sex[50];				//玩家性别
	struct Martial martial;
};


int main()
{
	struct Player player = { 1,"不知火舞",12345,"nan",{2,"lol",500,3} };
	struct Player * ptr_player1 = &player;
	//访问结构成员的一般形式：
	//【1】
	printf("%s\t%s\n", (*ptr_player1).name, (*ptr_player1).martial.name);
	//【2】
	printf("%s\t%s\n", ptr_player1->name, ptr_player1->martial.name);


	system("pause");
	return 0;
}