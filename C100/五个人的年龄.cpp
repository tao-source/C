#include<stdio.h>

/*
Q:有五个人坐在一起 问第五个人多少岁 他说比第四个人大两岁 第四个人说比第三个人大两岁
  第三个人比第二个大2岁 第二个人比第一个人大2岁 第一个人10岁
*/

int age(int n)
{
    if(n==1)
        return 10;
    return age(n-1)+2;
}
int main()
{
    {
    int num=5;
    printf("%dth age = %d",num,age(num));
    }
    return 0;
}