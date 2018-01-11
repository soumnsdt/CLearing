#pragma once
#ifndef Hero_H_INCLUDED
#define Hero_H_INCLUDED

#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>

typedef struct _myTime
{
	int year;
	int month;
	int day;
}MyTime;

typedef struct _hero
{
	char name[50];		//英雄名称
	char sex;			//英雄性别
	char job[20];		//英雄职业
	double hp;			//英雄生命值
	double speend;		//攻击速度
	char ability[20];	//特殊能力
	MyTime pubTime;		//上线时间
}Hero;

void ShowHero();//显示英雄的信息

#endif // !Hero_H_INCLUDED
