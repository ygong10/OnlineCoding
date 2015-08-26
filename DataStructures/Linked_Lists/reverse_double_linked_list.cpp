/*
@author
Yicheng Gong
Fall 2015
*/
#include <stack>
/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    if (!head){
        return NULL;
    }
    //using stack to store the pointers pointing at the nodes, then popping them off and reconnecting the prev and next to reverse
    stack<Node*> s;
    Node* curr = head;
    //while curr pointer is not NULL
    while (curr){
        s.push(curr);
        curr = curr->next;
    }
    Node* temp = s.top();
    head = temp;
    s.pop();
    //while stack is not empty
    while(!s.empty()){
        temp->next = s.top();
        temp->next->prev = temp;
        s.pop();
        temp = temp->next;
    }
    //make sure the tail->next is pointing at null
    temp->next = NULL;
    return head;

    
    // Complete this function
    // Do not write the main method. 
}
