/*
#include <stdio.h>

int main()
{

int n;
scanf("%d",&n);
    float arr[10];
    int m=0,i;
    for(i=0; i<n; i++)
    {
        scanf("%f",&arr[i]);
    }
    for(i=0; i<n; i++)
    {

        if(arr[i]>0)
            {
                m=m+1;

        }
    }
printf("%d valores positivos \n",m);







    return 0;
}
*/
#include <stdio.h>
int main()

{
    float n;
    int i,m=0;

    for(i=0;i<6;i++){
        scanf("%f",&n);

        if(n>0){
            m=m+1;
        }
    }
    printf("%d valores positivos\n",m);
    return 0;
}





