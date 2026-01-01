#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int Id;

    void setstudent() {
        name = "Sayadul Islam";
        Id=101103;
    }

    void showstudent()
     {
        cout << "Name: " << name << endl <<"Id: " << Id << endl;
    }
};

int main() {
    Student obj;
    obj.setstudent();
    obj.showstudent();
    return 0;
}
