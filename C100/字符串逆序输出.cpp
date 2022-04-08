#include<stdio.h>
void palin(int n);
int main()
{
	int i = 5;
	puts("input five char:");
	palin(i);
	printf("\n");
	return 0;
}

void palin(int n)
{
	char next;
	if (n <= 1)
	{
		next = getchar();
		printf("the result:");
		putchar(next);
	}
	else
	{
		next = getchar();
		palin(n-1);
		putchar(next);
	}
}