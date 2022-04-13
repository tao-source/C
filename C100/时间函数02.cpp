#include<stdio.h>
#include<time.h>

int main()
{
  
    time_t start, end; //日历类型变量
    int i; 
    start = time(NULL);

    for(i=0;i<300000;i++)
    {
        printf("\n");
    }
    end = time(NULL);
    printf("diff time=%6.3f",difftime(end,start));

    return 0;
}