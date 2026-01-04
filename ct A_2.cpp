#include <iostream>
using namespace std;

template <class T>
class Number {
    T x, y;

public:
    void getValues() {
        cout << "Enter two values: ";
        cin >> x >> y;
    }

    T maximum() {
        return (x > y) ? x : y;
    }
};

int main() {
    Number<int> n1;
    n1.getValues();
    cout << "Maximum is: " << n1.maximum() << endl;

    Number<float> n2;
    n2.getValues();
    cout << "Maximum is: " << n2.maximum() << endl;
    return 0;
}
