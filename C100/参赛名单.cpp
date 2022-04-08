#include<stdio.h>
/*
* Q:甲乙两队比赛 甲 a,b,c 乙 x,y,z  a说不和x比 c说不和x,z比 求参赛队
*/
int main()
{
	//c---> y a--->z b--->x
	//i--->a  j--->b k--->c
	char i, j, k;
	for (i = 'x'; i <= 'z'; i++)
	{
		for (j = 'x'; j <= 'z'; j++)
		{
			if (i != j)
			{
				for (k = 'x'; k <= 'z'; k++)
				{
					if (i != k && j != k)
					{
						if (i != 'x' && k != 'x' && k != 'z')
							printf("a---%c\tb---%c\tc---%c\n",i,j,k);
					}
				}
			}
		}
	}
	return 0;
}