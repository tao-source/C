#include<stdio.h>
#include<string.h>
int main()
{
    int len1,len2;
    int i,j,k;
    int count=0;
    char str1[]="ababacbbacbcab";
    char str2[]="cb";
    len1 = strlen(str1);
    len2 = strlen(str2);

    for(i=0;i<=len1-len2;i++)
    {
        for(j=0,k=i;j<len2&&str2[j]==str1[k];j++,k++);
        if(j==len2)
            count++; 
    }

    printf("count=%d\n",count);

    return 0;
}