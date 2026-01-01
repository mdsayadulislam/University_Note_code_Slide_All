#include <iostream>
using namespace std;

class Base {
public:
    Base(int x) {
        cout << "Base constructor called with value: " << x << endl;
    }
    virtual void display() {
        cout << "This is Base class." << endl;
    }
};

class Derived1 : public Base {
public:
    Derived1(int x) : Base(x) {
        cout << "Derived1 constructor called with value: " << x + 1 << endl;
    }
    void display() override {
        cout << "This is Derived1 class." << endl;
    }
};

class Derived2 : public Base {
public:
    Derived2(int x) : Base(x) {
        cout << "Derived2 constructor called with value: " << x + 2 << endl;
    }
    void display() override {
        cout << "This is Derived2 class." << endl;
    }
};/*
class Derived3 : public Base {
public:
    Derived3 (int x) : Base(x){
    cout << "Derivesd3 Constructor Call with Value: "<< x + 10 << endl;
    }
    void display() override {
        cout << "This is Derived2 class." << endl;
        }
};*/
class FinalDerived : public Derived1, public Derived2 {
public:
    FinalDerived(int x) : Derived1(x), Derived2(x) {
        cout << "FinalDerived constructor called with value: " << x + 3 << endl;
    }

    void show() {
        Derived1::display();
        Derived2::display();
    }
};

int main() {
    FinalDerived obj(10);
    obj.show();
    return 0;
}

