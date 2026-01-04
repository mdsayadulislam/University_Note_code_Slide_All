#include <iostream>
using namespace std;

// Parent Class 1
class Father {
public:
    void showFather() {
        cout << "I am the Father class." << endl;
    }
};
// Parent Class 2
class Mother {
public:
    void showMother() {
        cout << "I am the Mother class." << endl;
    }
};
// Child class inherits from both Father and Mother
class Child : public Father, public Mother {
public:
    void showChild() {
        cout << "I am the Child class." << endl;
    }
};
int main() {
    Child obj;
    obj.showFather(); // From Father class
    obj.showMother(); // From Mother class
    obj.showChild();  // From Child class
    return 0;
}

