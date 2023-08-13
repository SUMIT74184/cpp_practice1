#include<iostream>
using namespace std;

 class hero{
        public:

        int age=65;
        string name;
        int height;

        public:
        int getage(){
            return this->age;

        }
        int setheight(int height){
           return this->height=height;
         }//after doing public only i can access this methods throughout
        
    };




int main(){

hero first;
cout<<"its all good"<<endl;
  cout<< first.getage()<<endl;

 // cin>>first.height;
    cout<<first.setheight(451)<<endl;
    return 0;
}