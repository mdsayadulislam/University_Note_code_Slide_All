#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d%d",&a,&b);
    x=a+b;
   if(50<x)
   {
        printf("SOMA = %d Yes it is greater then 50\n",x);
   }
   else
   {
       printf("SOMA = %d No it is not greater then 50\n",x);
   }

    return 0;
}


