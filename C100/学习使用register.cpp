#include<stdio.h>

int main()
{
    //register int i;
    int i;
    int tmp=0;
    for(i=1;i<=100;i++)
        tmp+=i;
    printf("sum=%d",tmp);
    return 0;
}