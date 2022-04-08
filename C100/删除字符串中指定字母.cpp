#include<stdio.h>
#include<string.h>
/*
Q：删除字符串中指定的字符 比如"aca" 删除a字符
*/

char *char_delete(char *str,char*charset)
{
    int index=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]!=*charset)
            str[index++]=str[i];
    }
    str[index]='\0';
    return str;

}

char *function(char *str,char *charset)
{
    int hash[256];

    if(NULL==charset)
    {
        return str;
    }
    for(int i=0;i<256;i++)
        hash[i]=0;
    for(int i=0;i<strlen(charset);i++)
        hash[charset[i]]=1;
    int currentindex = 0;
    for(int i=0;i<strlen(str);i++)
    {
        if(!hash[str[i]])
        {
            str[currentindex++] = str[i];
        }
    }
    str[currentindex] = '\0';

    return str;
}

int main()
{
    char s1[10]="a";
    char s2[]="acabe"; 
    //printf("%s\n",function(s2,s1));
    printf("%s\n",char_delete(s2,s1));
    return 0;
}