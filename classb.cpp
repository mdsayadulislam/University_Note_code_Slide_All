#include<iostream>
using namespace std;

class number{
    int x, y;
    public:
        void set(int a, int b);
        void show();
};

void number::set(int a, int b)
            {
                x = a;
                y = b;
            }
void number::show()
            {
                cout<<"The number of x is: "<<x<<"\n"<<"The number of y is: "<<y<<"\n\n";
            }

int main(){
    number obj;
    obj.set(7, 10);
    obj.show();

    return 0;
}
