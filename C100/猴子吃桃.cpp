#include<stdio.h>

/*
* Q:猴子吃桃 每天吃一半多一个 十天之后只剩下一个 求一共摘了多少桃 
*/
int main()
{
	int sum=1;
	for (int i = 1; i <10; i++)
	{
		sum = (sum + 1) * 2;
	}
	printf("sum=%d",sum);
	return 0;
}