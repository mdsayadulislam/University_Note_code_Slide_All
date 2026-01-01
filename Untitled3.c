#include <stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
if((x=='a')|| (x=='e')||(x=='i')||(x=='o')||(x=='u')|| (x=='A')|| (x=='E') || (x=='I')||(x=='O')||(x=='U'))
printf ("This is vowel.");
if ((x=='A')|| (x=='E') || (x=='I')||(x=='O')||(x=='U'))
{
    printf("This is upear case vowel.");
}
else if ((x=='a')|| (x=='e')||(x=='i')||(x=='o')||(x=='u'))
{
    printf("This is lower case vowel.");

}
else if ((x>='a') && (x<='z'))
{

    printf ("This is lower con.");
}
else if  ((x>='A')&& (x<='Z'))
    {
    printf("This is Upear Con. ");
}


    else
        {
        printf("This is not alphabet  ");

    }

    return 0;
}
