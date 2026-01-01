#include <stdio.h>
int main ()
{
    float A,B,average;
    float x=3.5;
    float y=7.5;
    printf("Enter a number : ");
    scanf("%f%f",&A,&B);
average = (A * x + B * y) / (x + y);
printf("MEDIA = %.5f\n",average);
return 0;
}

