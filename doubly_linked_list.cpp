#include<iostream>
using namespace std;


class Node{
public:
int data;
Node*next;
};

void insertAtHead(Node* &Head,int d){
    Node* temp= Head;
    temp->next=Head;
    temp=Head;
}

void insertAtTail(Node* &Tail,int d){
    Node*temp=Tail;
    temp->next=NULL;
    temp=temp->next;
    temp=Tail;
}



int main(){
Node*  node1=new Node();
Node* Head =node1;
Node* Tail=node1;

    return 0;
}





