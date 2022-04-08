/*
* Q:有4个不重复的数字 1 2 3 4 可以组成多少个互不相同且无重复的三位数
*/
#include<stdio.h>

void function(int a[],int len)
{
	int i, j, k;
	int count = 0;
	for (i = 0; i < len; i++)
		for (j = 0; j < len; j++)
			for (k = 0; k < len; k++)
				if (a[i] != a[j] && a[j] != a[k] && a[i] != a[k])
				{
					count++;
					printf("%d %d %d\n", a[i], a[j], a[k]);
				}
	printf("count:%d", count);
}

int main()
{
	int i, j, k,len;
	int count = 0;
	int arr[] = { 1, 3, 5, 7 };
	len = (int)sizeof(arr) / sizeof(*arr);
	function(arr,len);
	/*
	for(i=1;i<5;i++)
		for(j=1;j<5;j++)
			for (k = 1; k < 5; k++)
				if (i != j && j != k && i != k)
				{
					count++;
					printf("%d %d %d\n",i,j,k);
				}
	printf("count:%d",count);
	*/
	return 0;
}