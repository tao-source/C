#include<stdio.h>
#pragma warning(disable:4996)
/*
* Q:һС���100m�߶����� ÿ�η���ԭ���߶ȵ�һ�� ���ʮ����ؾ���·�̺͸߶�
*/

int main()
{

	double h, s;

	h = s = 100;
	h = h / 2;
	for (int i = 2; i <= 10; i++)
	{
		s = s + 2 * h;
		h = h/2;
	}

	printf("10th's height is %lf and s is %lf",h,s);
	return 0;
}