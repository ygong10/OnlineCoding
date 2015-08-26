/*
@author
Yicheng Gong
Fall 2015
*/
/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node* curr = new Node();
    curr->data = data;
    curr->next = NULL;
    if (!head){
        head = curr;
        return head;
    }
    //pointer to find the last node in the linkedlist, so we can add the new node to the end
    auto last = head;
    while (last->next!=NULL){
        last = last->next;
    }
    last->next = curr;
    return head;
  // Complete this method
}
