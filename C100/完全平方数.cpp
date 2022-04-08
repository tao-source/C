#include<stdio.h>
//#pragma warning(disable:4996) 
/*
* Q:一个数 加上100是一个完全平方数 再加上168也是一个完全平方数 求这个数
*		x+100 = m2    x+100+168 = n2   n2-m2 = 168 = (n+m)(n-m) m+n-->i n-m-->j
*/

int main()
{
	int i,j,m,n;
	for ( i = 1; i <168/2+1 ; i++)
	{		
		if (168 % i == 0)
		{
			j = 168 / i;
			if (i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
			{
				printf("i = %d,j=%d\n",i,j);
				n = (i + j) / 2;
				m = (i - j) / 2;
				printf("%d+100=%d*%d\n", m * m - 100, m, m);
				printf("%d+100+168=%d*%d\n", m * m - 100, n, n);
			}

		}

	}
	return 0;
}