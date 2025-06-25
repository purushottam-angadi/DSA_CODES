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
int length(Node *head)
{ 
   int count=0;
     Node * temp=head;
    while(temp)
    {
        
        temp=temp->next;
        count++;
    }
    return count;
   
}
bool search_element(int x,Node* head)
{
     Node* temp=head;
     while(temp)
     {
     if(temp->data==x)
     {
        return true;
     }
     temp=temp->next;

     }
     return false;
     

}
int main()
   
{ 
    vector<int> arr= {2,3,4};
    Node * head= convertarrtoll(arr);
    Node * temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    int ans=length(head);
    cout<<endl;
    cout<<ans<<endl;
    int x=8;
    bool search= search_element(x,head) ;
    if(search)
    {
        cout<<"true"<<endl;
}
    else cout<<"false"<<endl;

}