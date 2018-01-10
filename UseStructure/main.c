/*
	一、使用结构：
		1、定义结构类型的同时，声明结构变量
			#include<stdio.h>
			struct Hero
			{
				char * name;
				int level;
				char * job;
				char * skill;
			}GY,DT,GL;

		2、直接声明结构变量
			#include<stdio.h>
			struct
			{
				char * name;
				int level;
				char * job;
				char * skill;
			}GY,DT,GL;

	二、嵌套结构
		
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
	//方法1:
	/*struct Martial martial = { 3,"lol",500,3 };
	struct Player player = { 1,"不知火舞" ,12345 ,"男" , martial };*/
	
	//方法2:
	struct Player player;
	struct Martial martial1 = { 3,"lol",500,3 };
	player.id = 1;
	player.name[50] = "不知火舞";
	player.password = 12345;
	player.sex[50] = "nan";
	player.martial = martial1;
	

	printf("%s\n", player.martial.name);

	system("pause");
	return 0;
}