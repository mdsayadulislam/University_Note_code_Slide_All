
#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{

    cout<<"Sayad"<<endl;
    int m=60,i;
    cout<<"Enter one number : \n";
    cin>>i;
    float k;
    cout<< "The float number is : "<<endl;
    cin>> k;
    double d;
    cout<< "The double number is :\n";
    cin>>d;
    char name[10];
    cout<< "The char. is : "<<endl;
    cin>>name;

 float sum=k+m;
cout<< "The sum is :"<< sum<<endl;

double div= k/i;
cout<< "The division is: "<<div <<endl;


double mul=d*i;
cout<< "The multiplication is:"<<mul <<endl;


float Sub=sum-div;
cout<< "Subtration is:"<<Sub<<endl;

int mod=i%m;
cout<< "The modulus is :"<<mod<<endl;
getch();
}

