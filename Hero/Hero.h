#pragma once
#ifndef Hero_H
#define Hero_H
#include<stdio.h>
#include<stdlib.h>

//�ṹ�壺Ӣ�ۡ�ְҵ��Ӣ�۵�����������ʱ��
//ְҵ
typedef struct _job
{
	int id;
	char * name;		//ְҵ����
	char * desc;		//ְҵ������
}Job;
//Ӣ�۵�����
typedef struct _abillity
{
	int id;
	char * name;		//������������
	char * intro;		//��������������
}Abillity;
//����ʱ��
typedef struct _pubTime
{
	int year;
	int month;
	int day;
}PubTime;
typedef struct _hero
{
	int id;
	char * name;		//����
	char * sex;			//�Ա�
	Job Job;			//ְҵ
	double hp;			//Ѫ��
	double speed;		//�����ٶ�
	Abillity abillity;	//��������
	PubTime pubTime;	//����ʱ��
}Hero;

//Job job;				//�򻯽ṹ���ʹ��

void InputHero();
void ShowHero();

#endif // !Hero_H
