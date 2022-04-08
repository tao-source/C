#include<stdio.h>

int *function(int arr[],int len)
{
    int i,j;
    int min,temp;
    for(i=0;i<len-1;i++)
    {
        min = i;
        for(j=i+1;j<len;j++)
        {
            if(arr[j]<arr[min])
            {
                min =j;
            }
                
        }
        if(min!=i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min]=temp;
        }

    }
    return arr;
}

int main()
{
    int arr[]={2,45,23,67,48,34,63,14,56,74};
    int len = sizeof(arr) / sizeof(*arr);
    function(arr,len);
    for(int i =0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}