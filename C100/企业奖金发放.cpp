/*
* Q:企业奖金根据利润区间发放
* 1. x<=10  10%
* 2. 10<x<20 低于10的部分10%+高于10的部分7.5
* 3. 20<x<40 高于20的部分5%
* 4. 40<x<60 高于40的部分3%
* 5. 60<x<100 高于60的部分1.5%
* 6. x>100 高于100的部分1%
*/
#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	float profit;
	puts("input your profit:");
	scanf("%f",&profit);
	if (profit <= 10)
		printf("your bonus:%f",profit*0.1);
	else if(profit>10&&profit<=20)
		printf("your bonus:%f", 10 * 0.1+(profit-10)*0.075);
	else if (profit > 20 && profit <= 40)
		printf("your bonus:%f", (profit - 20) * 0.05);
	else if (profit > 40 && profit <= 60)
		printf("your bonus:%f", (profit - 20) * 0.03);
	else if (profit > 60 && profit <= 100)
		printf("your bonus:%f", (profit - 20) * 0.015);
	else
		printf("your bonus:%f", (profit - 20) * 0.01);
	return 0;
}