#include <iostream>
using namespace std;
// Grandparent class
class Animal {
public:
    void breathe() {
        cout << "This animal can breathe." << endl;
    }
};
// Parent class (inherits Animal)
class Mammal : public Animal {
public:
    void walk() {
        cout << "This mammal can walk." << endl;
    }
};
// Child class (inherits Mammal)
class Human : public Mammal {
public:
    void speak() {
        cout << "This human can speak." << endl;
    }
};
int main() {
    Human obj;
    obj.breathe(); // From Animal class
    obj.walk();    // From Mammal class
    obj.speak();   // From Human class
    return 0;
}

