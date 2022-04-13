#include<stdio.h>

/*
Q:输入n为偶数时 调用函数求1/2+1/4+...1/n 当输入n为奇数 调用函数1/1+1/3+...1/n
    利用函数指针
*/

double evenumber(int n);
double oddnumber(int n);

int main()
{
    int n;
    double r;
    double (*pfunc)(int); //定义一个函数指针 指向函数
    printf("input a number:");
    scanf("%d",&n);
    if(n%2==0)
        pfunc=evenumber;
    else
        pfunc=oddnumber;

    r = (*pfunc)(n); //调用函数
    printf("%lf\n",r);
    return 0;
}

double evenumber(int n)
{
    double s=0,a=0;
    int i;
    for(i=2;i<=n;i+=2)
    {
        a = (double)1/i;
        s+=a;
    }
    return s;
}

double oddnumber(int n)
{
    double s=0,a=0;
    int i;
    for(i=1;i<=n;i+=2)
    {
        a = (double)1/i;
        s+=a;
    }
    return s;
}