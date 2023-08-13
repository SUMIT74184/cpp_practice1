#include<iostream>
using namespace std;
//method overriding

class Animal{

public:
void speaking(){
    cout<<"speaking"<<endl;
}
};

class Dog:public Animal{

// public:
// void speaking(){
// cout<<"speaking dog"<<endl;}


};

int main(){

Dog d;
d.Animal::speaking();


return 0;
};


    

