#include<stdio.h>

int main()
{
    int n=0,i=0;
    char s[20];
    printf("input a oct number:");
    gets(s);
    while(s[i]!='\0')
    {
        n = n*8+s[i]-'0';
        i++;
    }
    printf("Dec :%d",n);
    return 0;
}