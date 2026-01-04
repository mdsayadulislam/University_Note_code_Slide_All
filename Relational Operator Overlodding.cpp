
#include<iostream>
using namespace std;

class Number {
    int x, y;
public:
    Number(int a, int b) {
        x = a;
        y = b;
    }

    Number operator+(Number obj) {
        Number temp(0, 0);
        temp.x = x + obj.x;
        temp.y = y + obj.y;
        return temp;
    }
    Number operator*(Number obj) {
        Number temp(0, 0);
        temp.x = x * obj.x;
        temp.y = y * obj.y;
        return temp;
    }
    operator >(Number ob){
    if(x>ob.x&&y>ob.y){
        return 1;
    }
    else {
        return 0;
    }
    }
    void show() {
        cout << x <<" " << y << endl;
    }
};
int main() {
    Number ob1(1, 2), ob2(3, 4), ob3(5, 6), ob4(0,0);

    if (ob2 > ob1) {
        ob4 = ob1 * ob2 + ob3;
    }

    ob4.show();
    return 0;
}
