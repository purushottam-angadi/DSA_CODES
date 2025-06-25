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

Node* add2(Node* head1, Node* head2)
{
  Node* t1=head1;
  Node* t2=head2;
  Node* dummy= new Node(-1);
  Node* current=dummy;
  int carry=0;
  while(t1!=0 || t2!=0)
  { int sum=0;
      sum+=carry;
      if(t1) sum=sum+t1->data;
      if(t2) sum=sum+t2->data;
      Node* newnode= new Node(sum%10);
      carry= sum/10;

      current->next=newnode;
      current=current->next;

      if(t1) t1=t1->next;
      if(t2) t2=t2->next;
      
  }
  if(carry)
  {
     Node* newnode= new Node(carry);
     current->next=newnode;
  }
return dummy->next;
}



int main()
   
{ 
    vector<int> arr1= {2,4,3};
    vector<int> arr2= {5,6,4};
    Node * head1= convertarrtoll(arr1);
    Node * head2= convertarrtoll(arr2);

 
    Node* ans=add2(head1,head2);
      while(ans)
    {
        cout<<ans->data<<" ";
        ans=ans->next;
    }
  
}