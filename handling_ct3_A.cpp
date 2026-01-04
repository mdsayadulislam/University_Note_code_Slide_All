#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 0;

    try {
        if (b == 0)
            throw "Division by zero not allowed!";
        cout << "Result: " << a / b << endl;
    } catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }
    return 0;
}
