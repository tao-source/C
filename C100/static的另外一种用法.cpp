#include<stdio.h>

int main()
{
    int i,num;
    num=2;
    for(i=0;i<3;i++)
    {
        printf("num = %d\n",num);
        num++;
        {
            static int num=1;
            printf("static num= %d\n",num);
        }
    }
    return 0;
}