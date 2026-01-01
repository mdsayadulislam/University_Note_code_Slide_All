#include<stdio.h>
int main()
{

    int A[5]={50,30,11,3,9,11,13,65,10};
    int sum=0;
    for (int i=0;i<8;i++)
    {
        sum=sum+A[i];
    }

     printf("%d\n",sum);

}

