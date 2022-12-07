#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    int *p1, *p2, *p3;

    a = 10; //1
    b = 15; //2
    c = 27; //3

    p1 = &a; //4
    p2 = &b; //5
    *p1 = c; //6
    a = *p2; //7
    b = 6; //8
    p3 = &b; //9
    p3 = &c; //10
    *p1 = *p3; //11

    cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<", p1 = "<<*p1<<", p2 = "<<*p2<<", p3 = "<<*p3<<endl;

    return 0;
    
}