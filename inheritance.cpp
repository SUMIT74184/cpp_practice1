#include <iostream>
#include<math.h>
#include<conio.h>
using namespace std;

class Human { //also known as parent class or the super class
public:
    int weight;
    int height = 178;
    int age = 18;
};

class Male : public Human { // or class Male : private Human { also known as derived class
public:
    string color;

    string getcolor();
    //return color;

    int getweight() {
        return weight;
    }

    void setweight(int w) {
        this->weight = w;
    }
    
    int sleep(){
        cout<<"they are sleeping"<<endl;
    }

    void dancing() {
        cout << "all humans love to dance in happiness" << endl;
    }
};

int main() {
    Male obj1,obj2;
    obj1.setweight(34);
    cout << obj1.getweight() << endl;
    obj1.dancing();
    cout << obj1.sleep() << endl;


    return 0;
}
