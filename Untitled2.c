#include <stdio.h>
int main()
{
    int x,y,z;
    printf("The value is : ");
    scanf("%d%d%d",&x,&y,&z);
    if((x+y)>z && (y+z)>x && (y+x)>z)
    printf("This is triangle");
    if ((x==y) && (y==z) && (z==x))
        {
            printf("This is sealane");
        }
    else if ((x!=y) || (y!=z) || (z!=x))
    {
        printf("This is Isocelen");
    }
    else{
        printf("This is not a triangle ");
    }
    return 0;
}
