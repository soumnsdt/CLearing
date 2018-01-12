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
	char * name;		//Ӣ������
	char sex;			//Ӣ���Ա�
	char * job;		//Ӣ��ְҵ
	double hp;			//Ӣ������ֵ
	double speend;		//�����ٶ�
	char * ability;	//��������
	MyTime pubTime;		//����ʱ��
}Hero;

void InputHero();//��̬¼��Ӣ�۵���Ϣ
void ShowHero();//��ʾӢ�۵���Ϣ
void HpAvg();//��ʾ����Ӣ������ֵ��ƽ��ֵ

#endif // !Hero_H_INCLUDED
