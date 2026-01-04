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

    void show() {
        cout << x <<" " << y << endl;
    }
};

int main() {
    Number obj1(2, 3), obj2(4, 5), obj3(0, 0);
    obj3 = obj1 + obj2;
    obj3.show();
    return 0;
}

