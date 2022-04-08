#include<stdio.h>
/*
* Q:Çó1-20½×³ËÖ®ºÍ
*/

double function(int n)
{
	if (n == 1)
		return 1;
	else
		return n * function(n - 1);
}
int main()
{
	double sum = 0;
	//printf("sum=%d",function(20));
	for (int i = 1; i <= 20; i++)
	{
		sum += function(i);
	}
	printf("sum=%lf", sum);
	return 0;
}
/*
 #include <stdio.h>
int main()
 {
    double n = 1, sum = 0;
    for (int i = 1; i <= 20; i++)
    {
        n *= i;
       sum += n;
   }
    printf("%lf", sum);
}
*/