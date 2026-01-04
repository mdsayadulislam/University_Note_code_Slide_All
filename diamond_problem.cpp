#include <iostream>
using namespace std;

// Base class A
class A {
public:
    // Method in base class A
    void show() {
        cout << "Class A method" << endl;
    }
};

// Class B inherits from A
class B : public A {
public:
    // Method in class B (inherits show from A)
    void displayB() {
        cout << "Class B method" << endl;
    }
};

// Class C inherits from A
class C : public A {
public:
    // Method in class C (inherits show from A)
    void displayC() {
        cout << "Class C method" << endl;
    }
};

// Class D inherits from both B and C
class D : public B, public C {
public:
    // Method in class D
    void displayD() {
        cout << "Class D method" << endl;
    }
};

int main() {
    D obj;

    // Uncommenting the following line will cause an ambiguity error
    // because both B and C have inherited the show() method from A.
    //obj.show(); // ERROR: Ambiguous call, which "show()" to call? From B or C?

    obj.displayB(); // Calling method from B
    obj.displayC(); // Calling method from C
    obj.displayD(); // Calling method from D

    return 0;
}

