#include<iostream>
using namespace std;

int main(){

    int a =26;

    int * p = &a;


    cout<<p<<endl;
    cout<<* p<<endl;
    cout<<&p<<endl;
    cout<<a<<endl;
    cout<<&a<<endl;


    return 0;
}