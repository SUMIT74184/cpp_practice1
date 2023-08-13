#include<iostream>
#include<string>
using namespace std;

class Animal{

public:
int name;
int weight;
int bark;


void barking(){
    
    cout<<"the dog is barking unnecessarliy"<<endl;
}

};

class Dog :public Animal{

public:

void eating(){
    cout<<"the dog and cat have same food cost"<<endl;
}


};

class danger{
public:

void attaking(){
    cout<<"the bull is attacking everyone"<<endl;
}
};

class Cat:public Animal,public danger{

};

int main(){


Dog d;
d.eating();
d.barking();

Cat c;
c.barking();
c.attaking();

    return 0;
}