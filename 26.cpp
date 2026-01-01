#include <iostream>
using namespace std;

class number{
         int x,y;
         float z;
public:
    number()
    {
        x=0;
        y=0;
        z=0.0;
    }
    number (int a)
    {
        x=a;
        y=0;
        z=0.0;
    }
    number(int a, int b, float c)
    {
        x=a;
        y=b;
        z=c;
    }
    void show()
    {
        cout << x << " " << y << " " << z << endl;
    }
     };
     int main ()
     {
          number obj1,obj2 (1,2,3.5),obj3(10);
          obj1.show();
          obj2.show();
          obj3.show();
          return 0;
    }     
