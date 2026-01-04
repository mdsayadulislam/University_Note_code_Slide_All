#include <iostream>
using namespace std;

// Parent class
class Person {
public:
    void speak() {
        cout << "Person can speak." << endl;
    }
};

// Intermediate class 1
class Employee : virtual public Person {
public:
    void work() {
        cout << "Employee is working." << endl;
    }
};

// Intermediate class 2
class Student : virtual public Person {
public:
    void study() {
        cout << "Student is studying." << endl;
    }
};

// Child class
class WorkingStudent : public Employee, public Student {
public:
    void manageTime() {
        cout << "WorkingStudent manages both work and study." << endl;
    }
};

int main() {
    WorkingStudent obj;
    obj.speak();      // Inherited from Person (via virtual)
    obj.work();       // Inherited from Employee
    obj.study();      // Inherited from Student
    obj.manageTime(); // Own method

    return 0;
}

