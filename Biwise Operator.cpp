#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
   int a=32;
   int b=12;
   int c,d,e,f,g;
   c=a|b;
   cout << "Bitwise OR :"<<c<<endl;
   d=a^b;
   cout << "Bitwise EORE :"<<d<<endl;
   e=a&b;
   cout << "Bitwise AND :"<<e<<endl;
    f=a<<3; // 3 bar 2 dara gun
   cout << "Bitwise Shift left :"<<f<<endl;
     g=a>>3;// 3 bar 2 dara vag
   cout << "Bitwise Shift Right :"<<g<<endl;
    getch();


}
