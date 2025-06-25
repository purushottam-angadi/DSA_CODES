
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

int helper(Node* head)
{ Node* temp=head;
    if(temp==NULL)
{
   return 1;
}
int carry=helper(temp->next);
temp->data+=carry;
if (temp->data<10)
{
    return 0;
}
   else{ 
    temp->data=0;
    return 1;
   }

}

Node* add(Node* head)
{

int carry=helper(head);
if(carry==1)
{
 Node* newnode=new Node(1);
 newnode->next=head;
 head=newnode;
}
return head;
}



int main()
   
{ 
    vector<int> arr= {1,2,3,4,5};
    Node * head= convertarrtoll(arr);
    Node* answer= add(head);
    while(answer)
    {
        cout<<answer->data<<" ";
        answer=answer->next;
    }

   

}