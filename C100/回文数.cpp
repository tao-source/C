#include<stdio.h>
#include<math.h>
/*
Q:回文数 正反读都一样 12321
*/
int function(int n)
{
    int count=0,i=1;
    int temp;
    float sum=0;
    temp =n;
    int remainder;
    while(temp)
    {
        count++;
        temp/=10;
    }
    while(n)
    {
        //sum = sum+(n%10)*pow(10,count-i);
        //n=n/10;
        //i++;
        remainder = n%10;
        sum = sum*10+remainder;
        n/=10;
    }
    return sum;
}

int main()
{
    int num=12321;
    if(num == function(num))
        printf("YES");
    else
        printf("NO");
    return 0;
}