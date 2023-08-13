#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Creating the constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};


//defining all the functions
void insertAtHead(Node*& Head, int d);
void insertAtTail(Node*& tail, int d);
void insertAtMid(Node* Tail, Node* &Head, int position, int d);
void print(Node* &Head);

void insertAtHead(Node*& Head, int d) {
    Node* temp = new Node(d);
    temp->next = Head;
    Head = temp;
}


void deleteFirstNode(int position,int d){
    if(position==1){
     //   Head=Head->next;
       
}
 else{
            
        }
    
}

void insertAtTail(Node*& tail, int d) {
    Node* temp = new Node(d);
    Node* current = tail;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = temp;
    tail = temp;  // Update tail to point to the new last node
}

void insertAtMid(Node* Tail, Node* &Head, int position, int d) {
    Node* temp = Head;
    int cnt = 1;
    while (cnt < position - 1) {
        temp = temp->next;
        cnt++;
    }



    if (Tail->next == NULL) {
        insertAtTail(Tail, d);
        return;
    }
//our logic for the insertion at the middle
    Node* node_mid = new Node(d);
    node_mid->next = temp->next;
    temp->next = node_mid;
}

void print(Node* &Head) {
    Node* temp = Head;  // for traversing throughout the list
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Creation of the first node
    Node* node = new Node(10);

    // Head and Tail both point to the first node
    Node* Head = node;
    Node* Tail = node;

    insertAtHead(Head, 12);
    insertAtHead(Head, 13);
    insertAtHead(Head, 15);
    insertAtTail(Tail, 14);
    print(Head);
    insertAtMid(Tail, Head, 4, 34);
    print(Head);
    cout << "Tail: " << Tail->data << endl;

    return 0;
}
