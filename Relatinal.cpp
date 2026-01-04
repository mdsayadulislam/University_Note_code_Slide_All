#include<iostream>
using namespace std;
class Number {
    int x,y;
public:
    Number(int a,int b){
    x=a;
    y=b;
    }
    int operator >(Number ob){
    if(x>ob.x&&y>ob.y){
        return 1;
    }
    else {
        return 0;
    }
    }
    void show(){
    cout <<x<<""<<y<<endl;
    }
};
int main(){
Number ob1(2,3),ob2(4,5);
if(ob1>ob2){
    cout<<" ob1 is greater "<<endl;
}
else{
    cout<<" ob2 is greater "<<endl;
}
return 0 ;
}

