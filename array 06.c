#include<stdio.h>
int main()
{
    int arr[5]={3,4,5,6,7};
    int i,size=5,n=9;
    for(i=0;i<=size-1;i++)
    {
        if(n==arr[i])
        {
            printf("Found");
            break;
        }
    }
    if(i==5)
    {
        printf("Not Found");
    }

    return 0;
}

