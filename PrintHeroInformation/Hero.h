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
	char name[50];		//Ӣ������
	char sex;			//Ӣ���Ա�
	char job[20];		//Ӣ��ְҵ
	double hp;			//Ӣ������ֵ
	double speend;		//�����ٶ�
	char ability[20];	//��������
	MyTime pubTime;		//����ʱ��
}Hero;

void ShowHero();//��ʾӢ�۵���Ϣ

#endif // !Hero_H_INCLUDED
