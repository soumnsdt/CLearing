#pragma once
#ifndef Hero_H
#define Hero_H
#include<stdio.h>
#include<stdlib.h>

//结构体：英雄、职业、英雄的能力、上线时间
//职业
typedef struct _job
{
	int id;
	char * name;		//职业名称
	char * desc;		//职业的描述
}Job;
//英雄的能力
typedef struct _abillity
{
	int id;
	char * name;		//特殊能力名称
	char * intro;		//特殊能力的描述
}Abillity;
//上线时间
typedef struct _pubTime
{
	int year;
	int month;
	int day;
}PubTime;
typedef struct _hero
{
	int id;
	char * name;		//名称
	char * sex;			//性别
	Job Job;			//职业
	double hp;			//血量
	double speed;		//攻击速度
	Abillity abillity;	//特殊能力
	PubTime pubTime;	//上线时间
}Hero;

//Job job;				//简化结构体的使用

void InputHero();
void ShowHero();

#endif // !Hero_H
