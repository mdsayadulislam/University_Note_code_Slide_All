#include <iostream>
using namespace std;

// Abstract Product
class Smartphone
{
public:
    virtual void call() = 0;
    virtual void camera() = 0;
    virtual void calculator() = 0;

};

// Concrete Products
class iPhone : public Smartphone
{
public:
    void call()
    {
        cout << "iPhone calling\n";
    }
    void camera()
    {
        cout << "iPhone camera opening\n";
    }
    void calculator()
    {
        cout << "iPhone calculator launching\n";
    }
};

class Samsung : public Smartphone
{
public:
    void call()
    {
        cout << "Samsung calling\n";
    }
    void camera()
    {
        cout << "Samsung camera opening\n";
    }
    void calculator()
    {
        cout << "Samsung calculator launching\n";
    }
};

class Realme : public Smartphone
{
public:
    void call()
    {
        cout << "Realme calling\n";
    }
    void camera()
    {
        cout << "Realme camera opening\n";
    }
    void calculator()
    {
        cout << "Realme calculator launching\n";
    }
};

// Abstract Factory
class ABC
{
public:
    virtual Smartphone* createPhone() = 0;

};

// Concrete Factories
class iPhoneFactory : public ABC
{
public:
    Smartphone* createPhone()
    {
        return new iPhone();
    }
};

class SamsungFactory : public ABC
{
public:
    Smartphone* createPhone()
    {
        return new Samsung();
    }
};

class RealmeFactory : public ABC
{
public:
    Smartphone* createPhone()
    {
        return new Realme();
    }
};

// Client
int main()
{
    Smartphone *s;
    Samsung sm;

    s=&sm;


    s->call();
    s->camera();
    s->calculator();
return 0;
}
