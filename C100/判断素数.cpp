#include<stdio.h>
#pragma warning(disable:4996)
#include<math.h>
/*
* Q:�ж�101~200֮�������
*/
int main()
{
	char flag;
	for (int i = 101; i < 200;i++)
	{
		flag = 1;
		for (int j = 2; j < sqrt(i) + 1; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if(flag)	printf("%d\n",i);
	}
		

	return 0;
}