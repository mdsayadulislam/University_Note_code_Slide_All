#include<iostream>
using namespace std;

class Number {
    int x, y;
public:
    Number(int a, int b) {
        x = a;
        y = b;
    }

    Number operator++() {
        ++x;
        ++y;
        return *this;
    }

    void show() {
        cout << x << " " << y << endl;
    }
};

int main() {
    Number obj1(2, 3);
    ++obj1;
    obj1.show();
    return 0;
}

