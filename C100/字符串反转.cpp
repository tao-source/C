#include<stdio.h>
#include<string.h>
/*
Q:将字符串反转输出
*/

char *my_reverse(char *str)
{
    int len=0;
    /*
    while(*str!=0)
    {
        len++;
        str++;
    }
    */
    len = strlen(str);
    int i=0;
    char temp;
    while(i<=len/2-1)
    {
        temp = *(str+i);
        *(str+i) = *(str+len-1-i);
        *(str+len-1-i) = temp;
        i++;
    }
    return str;
}




void reverse(char *str)
{
    int len=0;
    char *p = str;
    while(*p!=0)
    {
        len++;
        p++;
    }

    int i=0;
    char c;
    while(i<=len/2-1)
    {
        c = *(str+i);
        *(str+i) = *(str+len-1-i);
        *(str+len-1-i) = c;
        i++;
    }
}

int main()
{
    //volatile const int a=0;
    char s[]="i love you";
    printf("%s\n",my_reverse(s));
    return 0;
}