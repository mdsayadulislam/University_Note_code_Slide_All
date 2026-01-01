#include<iostream>
using namespace std;

class number{
    int x, y;
    float z;
public:
    number(int a, int b, float c){
        x = a;
        y = b;
        z = c;
    }
    number(){
        x = 0;
        y = 0;
        z = 0.0;
    }
    ~number(){
        cout<<"Destructing\n";
    }
    void show(){
        cout<<"The number of x is: "<<x<<"\n"<<"The number of y is: "<<y<<"\n"<<"The number of z is: "<<z<<"\n\n";
    }
};

int main(){
    number obj_1;
    number obj_2(7, 9, 10.5);

    obj_1.show();
    obj_2.show();

    {
        number obj_3;
    }

    return 0;
}
