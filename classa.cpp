#include<iostream>
using namespace std;

class student{
        string name;
        int id;
        float cgpa;

    public:
        void set(string _name, int _id, float _cgpa)
        {
            id = _id;
            cgpa = _cgpa;
            name = _name;
        }
        void show()
        {
            cout<<"The name is: "<<name<<"\n"<<"The id is: "<<id<<"\n"<<"The cgpa is: "<<cgpa<<"\n\n";
        }
};

int main(){
    student a, t;
    t.set("Tamim", 123, 3.46);
    t.show();

    a.set( "Tanvir", 24030144, 3.98);
    a.show();
    return 0;
}
