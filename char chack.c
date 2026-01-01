#include <stdio.h>
int main ()
{
    int n1,n2;
    printf("Print 1 st number : ");
    scanf("%d",&n1);
    printf(" print second number : ");
    scanf("%d",&n2);
    if(n1>n2){
        printf("maximum number :%d/n",n1);
    }else if(n1<n2);{
    printf("maximum number : %d",n2);
    }
    return 0;
}
