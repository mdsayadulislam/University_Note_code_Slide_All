#include<stdio.h>
int main()
{
    int x,y;
    double z,b;
    scanf("d% d% %lf",&x,&y,&z);
b=y*z;     //y= hour z= per hour
printf("NUMBER = %d\n",x);
printf("SALARY = U$ %.2lf\n",b);
return 0;
}
