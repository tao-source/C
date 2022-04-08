#include<stdio.h>
#pragma warning(disable:4996)
/*
* Q:1 1 2 3 5 8 13 21 34...
*/

int function(int num)
{
	if (num > 2)
		return function(num - 1) + function(num - 2);
	else
		return 1;
}
int main()
{
	int a, b,temp,i,num;
	printf("input the number you want know:");
	scanf("%d",&num);
	/*
	a = 1, b = 1;
	for (i = 0; i < num-2; i++)
	{
		temp = b;
		b = a + b;
		a = temp;
	}
	*/
	
	//printf("the number is:%d",b);
	printf("the number is:%d", function(num));
	return 0;
}