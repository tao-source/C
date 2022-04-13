#include<stdio.h>
/*
Q:有n个整数 使其前面各数顺序向后移m个位置 最后m个数变成最前面的m个数
*/

void function(int arr[],int len,int offset)
{
    int *p,*arr_end;
    arr_end = arr+len;  //指向最后一个元素
    int last;

    while(offset)
    {
        last =*(arr_end-1);
        for(p=arr_end-1;p!=arr;--p)
            *p=*(p-1);
        *arr = last;
        --offset;
    }
}
int main()
{

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int i,n,len;
    int offset = 4;
    len = sizeof(arr)/sizeof(*arr);
    for(i=0;i<len;i++)
        printf("%d ",arr[i]);
    
    function(arr,len,offset);
    printf("\n");
    for(i=0;i<len;i++)
        printf("%d ",arr[i]);

    return 0;
}