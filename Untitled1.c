#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the value is : ");
    scanf("%d%d%d",&x,&y,&z);
    if ((x+y)>z&&(y+z)>x&&(z+x)>y)
    {
        printf("The triangle is possibale");
    }
    else{
    printf("The triangle is not possibal");}
    return 0;
}
