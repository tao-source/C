/*
* Q:��ҵ��������������䷢��
* 1. x<=10  10%
* 2. 10<x<20 ����10�Ĳ���10%+����10�Ĳ���7.5
* 3. 20<x<40 ����20�Ĳ���5%
* 4. 40<x<60 ����40�Ĳ���3%
* 5. 60<x<100 ����60�Ĳ���1.5%
* 6. x>100 ����100�Ĳ���1%
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