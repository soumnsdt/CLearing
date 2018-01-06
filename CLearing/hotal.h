#pragma once
#ifndef HOTEL
#define HOTEL

#define	HOTEL1 872.0
#define	HOTEL2 1838.0
#define	HOTEL3 789.0
#define	HOTEL4 1658.0
#define	DISCOUNT 0.95

//菜单函数
int menu(void);
//返回用户预订的天数
int getNights(void);
//需要支付的金额
void showPrice(int Night);

#endif // _HOTEL_H_
