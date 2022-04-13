#include<stdio.h>
/*
Q：有n个人围成一圈 顺序排号 从第一个人开始报（1到3报数）报到三的人退出圈子
    问最后留下的是原来第几号的那位
*/

int main()
{
   
    int num[50],n,*p,j,loop,i,m,k;
    n = 8; //人数
    p = num;
    //给人编号   1 2 3 4 5 6..
    for(j=0;j<n;j++)
    {
        *(p+j)=j+1;
    }

    i=0; //i用于计数 让指针后移
    m=0; //m记录退出圈子的人数
    k=0; //k报数 1,2,3

    while(m<n-1) //退出的人不大于总人数 留下的人数至少是一个
    {
        if(*(p+i)!=0)
        {
            k++;
        }
        if(k==3)
        {
            k=0;
            *(p+i)=0;
            m++;
        }
        i++;
        if(i==n)
        {
            i=0;
        }
    }

    for(loop=0;loop<n;loop++)
    {
        if(num[loop]!=0)
        {
            printf("%2d\n",num[loop]);
        }
    }

    return 0;
}