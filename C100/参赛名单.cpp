#include<stdio.h>
/*
* Q:�������ӱ��� �� a,b,c �� x,y,z  a˵����x�� c˵����x,z�� �������
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