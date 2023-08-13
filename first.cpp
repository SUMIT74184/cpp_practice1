#include <iostream>
using namespace std;

class A
{
public:
    char name[100];
    int health;

private:
    int Level;

public:
    int getLevel()
    {
        return Level;
    }

    void setLevel(int l)
    {
         Level = l; 
    }

    void func1()
    {
        // cout<<"print the size of the level"<<sizeof(level)<<endl;
    }
};

int main()
{
    A i;
    cout<<"size of the object"<<sizeof(i)<<endl;
    //  i.name[100] = 'John';  // Assigning a value to the name variable
    i.health = 100; // Assigning a value to the health variable

    cout << "the level of the game is " << i.getLevel() << endl; // first it will give you the garbage value
    i.setLevel(90);

    cout << "the new level after updation is " << i.getLevel() << endl;
    cout << i.health << endl;


    //the dynamically allocation for the instance of class 
    A *k=new A();//here we allocated the menory
    cout<< "the dynamically set level is"<<(*k).getLevel() <<endl;
   cout<< "the new level after updation of dynamic ";
    k->setLevel(89);
    (*k).setLevel(92);//always in the braces and here we are derefferencing the value of the k
   cout<<k->getLevel()<<endl;
    return 0;
}
