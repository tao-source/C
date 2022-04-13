#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* strconnect(char *str1,char *str2)
{
    char *str;
    str = (char*)malloc(strlen(str1)+strlen(str2)+1);
    str[0]='\0'; //str里面清空
    strcat(str,str1);
    strcat(str,str2);

    return str;
}
int main()
{
    char str1[20]="123456";
    char str2[20]="54321";
    char *str;
    str = strconnect(str1,str2);
    printf("%s\n",str);
    return 0;
}