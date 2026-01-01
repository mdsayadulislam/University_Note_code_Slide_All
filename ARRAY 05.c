#include<stdio.h>
int main()
{
    int i,size=5;
    int arr[size];
    for(i=0;i<=size-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
