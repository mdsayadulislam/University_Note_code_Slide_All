
#include<iostream>
#include<conio.h>
#include<iomanip>
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
    cout<<showpoint;
 float sum=k+m;
cout<<setw(25)<< "The sum is :"<< sum<<endl;

cout<<fixed;
cout<<setprecision(4);
double div= k/i;
cout<<setw(25)<< "The division is: "<<div <<endl;

cout<<setprecision(10);
double mul=d*i;
cout<< "The multiplication is:"<<mul <<endl;


float Sub=sum-div;
cout <<setw(25)<< "Subtration is:"<<Sub<<endl;

cout<<noshowpoint;
int mod=i%m;
cout<<setw(25)<< "The modulus is :"<<mod<<endl;
}
