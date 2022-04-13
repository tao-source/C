#include<stdio.h>
#include<time.h>

int main()
{
    
    time_t rawtime; //日历类型变量
    struct tm *timeinfo;    //保存时间和日期的结构

    time(&rawtime);     //计算当然日历时间 并且格式为time_t
    timeinfo = localtime(&rawtime); //返回一个指向字符串的指针 代表了结构体的时间和日期
    printf("time:%s",asctime(timeinfo));
    

    return 0;
}