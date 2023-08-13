#include<iostream>
using namespace std;

class Animal{//super class also known as the parent class 
//parent class

public:
int name;
int weight=78;
int bark;

public:
void barking(){
    cout<<"the dog is barking unnecessarliy"<<endl;

}
};

class Dog {//parent class 2 in this ehich has the unique property in
public:


void eating(){
    cout<<"the dog and cat have same food cost"<<endl;
}
};

class Cat:public Dog,public Animal{

};//derived class or the child class


int main(){
Dog d;


Cat c;
c.barking();
c.eating();
cout<<c.weight<<endl;
//both of the classes act independently in the given inheritance 
//but the derived class will inherite each of which unique identity and relation from the given 


    return 0;
}