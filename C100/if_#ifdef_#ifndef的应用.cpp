#include<stdio.h>

#define MAX
#define MAXNUM(x,y) (x>y)?x:y
#define MINNUM(x,y) (x<y)?x:y
int main()
{
    int a=10,b=20;
    printf("123\n");
#ifdef MAX
    printf("bigger num is:%d\n",MAXNUM(a,b));
#else
    printf("smaller num is:%d\n",MINNUM(a,b));
#endif

#ifndef MIN
    printf("smaller num is:%d\n",MINNUM(a,b));
#else
    printf("bigger num is:%d\n",MAXNUM(a,b));
#endif
#undef MAX
#ifdef MAX
    printf("bigger num is:%d\n",MAXNUM(a,b));
#else
    printf("smaller num is:%d\n",MINNUM(a,b));
#endif
#define MIN
#ifndef MIN
    printf("smaller num is:%d\n",MINNUM(a,b));
#else
    printf("bigger num is:%d\n",MAXNUM(a,b));
#endif
    return 0;
}