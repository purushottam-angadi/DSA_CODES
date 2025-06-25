#include <iostream>
#include <vector>
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
Node* remove(Node* head,int n)
{
    Node* slow=head;
    Node* fast=head;
    int i=n;
    while(i!=0)
    { 
       fast=fast->next;
       i--;
    }
    while(fast->next!=0)
    {
    slow=slow->next;
    fast=fast->next;
    }
    Node* prev=slow->next;
    slow->next=slow->next->next;
    delete(prev);
    return head;

}

int main()
   
{ 
    vector<int> arr= {1,2,3,4,5};
    Node * head= convertarrtoll(arr);
    Node* answer= remove(head,2);
    while (answer)
    {
        cout<<answer->data<<" ";
        answer=answer->next;
    }

   

}