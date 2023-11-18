#include<iostream>
#include<vector>
using namespace std;

class PUB {
public:
    int health;
    char level;
    static int timeToend;

    // Default constructor
    PUB() {
        cout << "hello i'm new constructor" << endl;
    }
 
    // Parameterized constructor
    PUB(int health, char level) {
         cout << "the value on the this keyword: " << this << endl;
         this->health = health;
         cout << "the level of the player is: " << this->level << endl;
     }

    // Copy constructor
    PUB(const PUB& obj) {
       this-> health = obj.health;
       this-> level = obj.level;
        cout << "Copy constructor called" << endl;
    }

    //destructor
    ~PUB(){
        cout<<"destructor called"<<endl;
    }

    void print() {
        cout << "the health value is: " << this->health << endl;
        cout << "the level of the player is: " << this->level << endl;
    }

    char getlevel() {
        return level;
    }

    int gethealth() {
        return health;
    }

    void sethealth(int h) {
        health = h;
    }

    void setlevel(char l) {
        level = l;
    }
    static int random(){
   return timeToend;
}
};
 int PUB::timeToend=4;



int main() {
    PUB obh(12, 'B');//here we are calling the copy constructor
    obh.print();

    // PUB skh(obh);
    // skh.print();
   cout<< PUB::random()<<endl;

    return 0;
}
