#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Node{
public:
  int data;
  Node* next;

  Node(int data1, Node* next1)
  {
    data=data1;
    next=next1;
  }
   Node(int data1)
  {
    data=data1;
    next=nullptr;
  }


  
};

Node* convertarrtoll(vector<int> &arr)
{
    Node* head= new Node(arr[0]);
    Node* mover= head;
    for(int i=1; i<arr.size(); i++)
    {
    Node *temp= new Node(arr[i]);
    mover->next=temp;
    mover=temp;
    }
    return head;
}

Node* findmiddle(Node* head)
{
    Node* slow=head;
    Node* fast=head;
    fast=fast->next;
   
  while (fast != NULL && fast->next != NULL) {
       
        slow = slow->next; 
        
        fast = fast->next->next; 
    }
    return slow;

}
Node* mergeTwoSortedLinkedLists(Node *left, Node* right)
{
   Node* dump=new Node(-1);
   Node* temp=dump;
while (left != NULL && right!= NULL){
   if (left->data<=right->data)
   {
        dump->next=left;
        left=left->next;

   }
   else{
        dump->next=right;
        right=right->next;

   }
   dump=dump->next;
}
if (left!=NULL)
{
   dump->next=left;
   left=left->next;
}
if (right!=NULL)
{
   dump->next=right;
   right=right->next;
}
    return temp->next;
}

    
Node* mergesort(Node* head)
{ 
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    Node* mid=findmiddle(head);
    Node* left=head;
    Node* right=mid->next;
    mid->next=nullptr;

    left=mergesort(left);
    right=mergesort(right);

    return mergeTwoSortedLinkedLists(left, right);



    
}


int main()
   
{ 
    vector<int> arr= {1,0,1,2,0,2,1};
    Node * head= convertarrtoll(arr);
    Node* answer=mergesort(head);
    while(answer)
    {
      cout<<answer->data<<" ";
      answer=answer->next;
    }
    
  
}
