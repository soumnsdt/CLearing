#pragma once
#ifndef HOTEL
#define HOTEL

#define	HOTEL1 872.0
#define	HOTEL2 1838.0
#define	HOTEL3 789.0
#define	HOTEL4 1658.0
#define	DISCOUNT 0.95

//�˵�����
int Menu(void);
//�����û�Ԥ��������
int GetNights(void);
//���ݷ���ĵ��ۺ���ס���������������û���Ҫ֧���Ľ��
double GetPrice(double price,int nights);

#endif // _HOTEL_H_
