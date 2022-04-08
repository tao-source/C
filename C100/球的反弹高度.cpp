#include<stdio.h>
#pragma warning(disable:4996)
/*
* Q:一小球从100m高度落下 每次反弹原来高度的一半 求第十次落地经过路程和高度
*/

int main()
{

	double h, s;

	h = s = 100;
	h = h / 2;
	for (int i = 2; i <= 10; i++)
	{
		s = s + 2 * h;
		h = h/2;
	}

	printf("10th's height is %lf and s is %lf",h,s);
	return 0;
}