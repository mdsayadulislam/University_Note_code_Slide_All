#include<iostream>
using namespace std;

class number {
    int x, y;
    float z;

public:
    number() {
        x = 0;
        y = 0;
        z = 0.0;
    }
    number(int a, int b, float c) {
        x = a;
        y = b;
        z = c;
    }
    void show() {
        cout << "The number of x is: " << x << "\n"
             << "The number of y is: " << y << "\n"
             << "The number of z is: " << z << "\n\n";
    }
};

int main() {
    number object_1;
    number object_2(1, 2, 3.5);
    number object_3(4, 10, 17.5);

    object_1.show();
    object_2.show();
    object_3.show();

    return 0;
}
