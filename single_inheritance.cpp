#include <iostream>
using namespace std;
// Parent class
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};
// Child class
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};
int main() {
    Dog myDog;
    myDog.eat();  // Inherited from Animal class
    myDog.bark(); // Dog's own method
    return 0;
}

