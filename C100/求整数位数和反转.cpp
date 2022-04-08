#include<stdio.h>

/*
Q:给一个不多于5位数额正整数 求是几位数 逆序打印各数字
*/
void function(unsigned int n)
{
    int count=0;
    while(n)
    {
        count++;
        printf("%d",n%10);
        n = n/10; 
    }
    printf("\ncount=%d",count);
      
}
int main()
{
    function(4325);
    return 0;    
}