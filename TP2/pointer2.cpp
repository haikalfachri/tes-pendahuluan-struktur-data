#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    int *p1, *p2, *p3;

    a = 10;
    b = 15;
    p1 = &b;
    p2 = p1;
    c = 27;
    p1 = &c;
    a = *p1;
    p3 = &b;
    *p2 = 8;

    cout << "a: "<<a<<", b: "<<b<<", c : "<<c<<", p1: "<<*p1<<", p2: "<<*p2<<", p3: "<<*p3<<endl;
    return 0; 
}