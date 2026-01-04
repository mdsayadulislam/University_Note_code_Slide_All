#include <iostream>
using namespace std;

// Parent class
class Vehicle {
public:
    void move() {
        cout << "This vehicle can move." << endl;
    }
};

// Child class 1
class Car : public Vehicle {
public:
    void drive() {
        cout << "The car is driven on the road." << endl;
    }
};

// Child class 2
class Boat : public Vehicle {
public:
    void sail() {
        cout << "The boat sails on water." << endl;
    }
};

int main() {
    Car myCar;
    Boat myBoat;

    myCar.move();  // Inherited from Vehicle
    myCar.drive(); // Car's own method

    myBoat.move(); // Inherited from Vehicle
    myBoat.sail(); // Boat's own method

    return 0;
}

