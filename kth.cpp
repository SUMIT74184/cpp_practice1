#include<iostream>
using namespace std;
Node* kReverse(Node* head, int k) {
    // Write your code here.
    if(head==NULL){
		return NULL;
	}
	Node*prev=NULL;
	Node*current=head;
	Node*forward=NULL;
	int cnt=0;

	while(current!=NULL&&cnt<k){
		forward=current->next;
		current->next=prev;
      
		prev=current;
		  current=forward;
		cnt++;
	}
	//step 2 recurssion
	if(forward!=NULL){
		head->next=kReverse(forward,k);
	}
	//step 3 return head of the linked list
	return prev;
}
int main(){

    return 0;
}