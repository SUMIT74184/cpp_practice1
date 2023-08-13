#include<iostream>
using namespace std;

class Animal{

public:
int name;
int weight;
int bark;

public:
void barking(){
    cout<<"the dog is barking unnecessarliy"<<endl;
}

};

class Dog :public Animal{

public:
void eating(){
    cout<<"the dog and cat have same food cost"<<endl;
}

//how hierarchical inheritance works in the code
};


class Cat:public Animal{

};


int main(){


Dog d;
//d.barking();

Cat c;
c.barking();



    return 0;
}