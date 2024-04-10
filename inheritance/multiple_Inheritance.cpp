#include<iostream>
using namespace std;

class animal{

    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};

class human{

    public:
    string color;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

// Multiple Inheritance

class Hybrid: public animal, public human{

};



int main(){
    
    Hybrid obj1;
    obj1.speak();
    obj1.bark();

    return 0;
}