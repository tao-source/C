#include<stdio.h>

/*
* Q:���ӳ��� ÿ���һ���һ�� ʮ��֮��ֻʣ��һ�� ��һ��ժ�˶����� 
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