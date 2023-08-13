#include <iostream>
using namespace std;

class Animal {
protected:
    string name;

public:
    int weight;
    int bark;

    void barking() {
        cout << "the dog is barking unnecessarily" << endl;
    }
};

class Dog : public Animal {
public:
    void eating() {
        cout << "the dog is eating" << endl;
    }

    string getname() {
        return name;
    }
  

    void setname(string n) {
        this->name = n;
    }
};

class Cat : public Animal {
public:
    void purring() {
        cout << "the cat is purring" << endl;
    }
};

int main() {
    Dog d;
  // @brief 
   // @return 
   // d.setname();

    Cat c;
    c.purring();

    return 0;
}
