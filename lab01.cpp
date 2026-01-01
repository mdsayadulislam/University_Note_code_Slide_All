#include <iostream>
using namespace std;
class Number
{
public:
    int a,b;
    void setab() {
        a = 10;
        b = 20;
    }
    void showab()  {
        cout <<endl<< a << endl<<b<<endl;
    }
};
int main() {
    Number obj,obj0;
    obj.setab();
    obj.showab();
    obj0.setab();
    obj0.showab();
    return 0;
}


