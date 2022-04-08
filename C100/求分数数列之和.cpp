#include<stdio.h>

/*
* Q:求 2/1	3/2	 5/3  8/5 13/8...20项之和	
*/
int main()
{
	double sum;
	float a, b,temp;
	a = 2, b = 1;
	sum = a / b;
	for (int i = 2; i <=20; i++)
	{
		temp = a;
		a = a + b;
		b = temp;
		sum += a / b;
	}
	printf("sum=%lf",sum);

	return 0;
}