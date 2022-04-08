#include<stdio.h>

int main()
{
    int sum=0;
    int a[3][3] = { 1, 2, 3,
                    4, 5, 6,
                    7, 8, 9

    };
    for(int i=0;i<3;i++)
    {
        sum +=a[i][i];
    }  
    printf("sum=%d\n",sum);  
    return 0;
}