#include "hello.h"
#include "hello.cpp"

int main(){
    cout<<"Test procedure Greeting"<<endl;
    string name = "Muhamad Fachri Haikal";
    string id = "1301202398";
    greetings(name, id);
    cout<<"please answer question 1"<<endl<<endl;

    cout<<"Test procedure swap_1 and swap_2"<<endl;
    int a = 15;
    int b = 30;
    int c = 75;
    swap_1(a,b,c);
    cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<endl;
    a = 15;
    b = 30;
    c = 75;
    swap_2(a,&b,&c);
    cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<endl;
    cout<<"please answer Question 2"<<endl<<endl;

    cout<<"Test procedure confused"<<endl;
    confused();
    cout<<"please answer Question 3"<<endl<<endl;

    cout<<"Test procedure indside"<<endl;
    remove_inside(5);
    cout<<"Please answer Question 4"<<endl<<endl;

    cout<<"Test procedure indexing"<<endl;
    cout<<"example 1 : "<<indexing(70, 75, 60)<<endl;
    cout<<"example 2 : "<<indexing(45, 70, 50)<<endl;
    cout<<"example 3 : "<<indexing(75, 80, 82)<<endl;
    cout<<"please answer Question 5"<<endl<<endl;

    return 0;
}

