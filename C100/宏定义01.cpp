#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define SQ(X) (X)*(X)
int main()
{
    int num;
    int again=1;
    while(again)
    {
        printf("input num:");
        scanf("%d",&num);
        printf("num2 = %d\n",SQ(num));
        if(num>=50)
            again = TRUE;
        else
            again = FALSE;
    }
    return 0;
}