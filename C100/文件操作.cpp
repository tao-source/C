#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    char filename[25];
    char ch;
    printf("input filename:");
    gets(filename);
    
    if((fp=fopen(filename,"w"))==NULL)
    {
        printf("error:cannot open file\n");
        exit(0);
    }

    printf("input some chars,# end:\n");
    while((ch=getchar())!='#')
    {
        fputc(ch,fp);
    }

    fclose(fp);



    return 0;
}