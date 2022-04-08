#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int num;

	printf("input number:");
	scanf("%d",&num);

	for (int i = 2; i <= num; i++)
	{
		while (num % i == 0)
		{
			printf("%d", i);
			num = num / i;	
			if (num != 1) printf("*");
		}
	}
	printf("\n");

	return 0;
}