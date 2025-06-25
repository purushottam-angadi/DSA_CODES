#include<iostream>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;


Node(int data1, Node* next1, Node* back1)
{
    data=data1;
    next=next1;
    back=back1;
}
Node(int data1)
{
    data=data1;
    next=nullptr;
    back=nullptr;
}
};


Node* convertarrtodll(vector<int> &arr)
{
    Node* head= new Node(arr[0]);
    Node* prev=head;
    for(int i=1; i<arr.size();i++)
    { 
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
Node* reversedll(Node* head)
{ 
      Node* prev=NULL;
      Node* temp=head;
      while(temp)
      { 
        prev=temp->back;
        temp->back=temp->next;
        temp->next=prev;
        temp=temp->back;
    
      }
      return prev->back;

}

int main()
{
    vector<int> arr={1,2,3,4};
    Node* head= convertarrtodll(arr);
   

      Node* answer= reversedll(head);
    while(answer)
    {
        cout<<answer->data<<" ";
        answer=answer->next;
    }
}