#include <stdio.h>
int main ()
{
    int a,b,c,max,mid,min;
    scanf("%d%d%d",&a,&b,&c);
    max=a;
    min=a;
    if(max<b)
    {
        max=b;
    }
    if(max<c)
    {
        max=c;

    }
    if(min>b)
    {
        min=b;
    }
    if (min>c)
    {
        min=c;
    }
    if ((a!=max)&&(a!=min))
    {
        mid=a;
    }
    if (b!=max&&b!=min)
    {
        mid=b;
    }
    if (c!=max&&c!=min)
    {
        mid=c;
    }
    printf("%d\n%d\n%d\n",min,mid,max);
    printf("\n%d\n%d\n%d",a,b,c);
    return 0;
}
