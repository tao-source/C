#include<stdio.h>
char c = 'A';
short d = 100;
int main( )
{

    int *p;
    p = (int*)&c;
    *p =100;
    printf("c=%c\n",c);
    printf("d=%d\n",d);
    return 0;
}