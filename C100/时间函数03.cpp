#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
  
    long i=10000000L;
    clock_t start,finish;
    double TheTimes;
    printf("do %ld loop need time:",i);
    start = clock();
    while(i--);
    finish = clock();
    TheTimes = (double)(finish-start) / CLOCKS_PER_SEC;
    printf("%f s\n",TheTimes);

    return 0;

}