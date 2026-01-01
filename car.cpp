#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;

    void setinformation() {
        brand ="Toyota";
        year =2025;
    }

    void showinformation()
     {
        cout << "Brand: " << brand << " Year: " << year << endl;
    }
};

int main() {
    Car obj1;

    obj1.setinformation();
    obj1.showinformation();
    return 0;
}
