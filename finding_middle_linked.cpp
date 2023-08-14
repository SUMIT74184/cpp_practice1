
#include<iostream>
using namespace std;
class ListNode {

    ListNode*next;
public:

  ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        ListNode* mid = head;
        while(temp != NULL && temp -> next != NULL){
            mid = mid -> next;
            temp = temp->next-> next;
        }
        return mid;
    }
    };
int main(){

    return 0;
}