#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, b, c,temp;
	printf("input three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if (a > b)
	{
		temp = b; b = a; a = temp;
	}
	if (a>c)
	{
		temp = c; c = a; a = temp;
	}	
	if (b > c)
	{
		temp = c; c = b; b = temp;
	}
		
	printf("%d %d %d",a,b,c);
	
	return 0;
}