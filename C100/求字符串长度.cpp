#include<stdio.h>

int main()
{
    char str[50];
    int len=0;
    char *p;
    p =str;
    gets(str);

    while(*p!='\0')
    {
        len++;
        p++;
    }

    printf("len=%d\n",len);


    return 0;
}