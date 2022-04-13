#include<stdio.h>
#include<string.h>

void function(char *str1,char *str2)
{
    char temp[20];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

}

int main()
{
    
    char str1[] ="123456";   
    char str2[] ="654321";
    function(str1,str2);
    printf("str1=%s\n",str1);
    printf("str2=%s\n",str2);
    return 0;

}