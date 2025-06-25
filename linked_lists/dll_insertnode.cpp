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

Node* deletehead(Node* head)
{
    
    if( head==NULL || head->next==NULL)
    return NULL;
    Node* temp=head;
    head=head->next;
    head->back=nullptr;
    temp->next=nullptr;
    delete temp;
    return head;
}

Node* deletetail(Node* head)
{
    if( head==NULL || head->next==NULL)
    return NULL;
    Node* temp=head;
    while(temp->next!=NULL)
    {
    temp=temp->next;
    }
   Node* prev=temp->back;
   temp->back=nullptr;
   prev->next=nullptr;

    delete temp->next;
    return head;
}

Node* deletek(Node* head,int k)
{

    if(k==1)
    {
    if( head==NULL || head->next==NULL)
    return NULL;
    Node* temp=head;
    head=head->next;
    head->back=nullptr;
    temp->next=nullptr;
    delete temp;
    return head;

    }

   
    Node* temp=head;
    int count=0;
    while(temp)
    {
        count++;
          if(count==k)
          {
            Node* prev=temp->back;
            prev->next=prev->next->next;
            temp->next=nullptr;
            temp->back=nullptr;
            break;
          }
          temp=temp->next;
    }
    return head;
  

}
Node* deletekthele(Node* head,int ele)
{

    if(ele==head->data)
    {
    if( head==NULL || head->next==NULL)
    return NULL;
    Node* temp=head;
    head=head->next;
    head->back=nullptr;
    temp->next=nullptr;
    delete temp;
    return head;

    }

   
    Node* temp=head;
    
    while(temp)
    {
        
          if(temp->data==ele)
          {
            Node* prev=temp->back;
            prev->next=prev->next->next;
            temp->next=nullptr;
            temp->back=nullptr;
            break;
          }
          temp=temp->next;
    }
    return head;
  
}
int main()
{
    vector<int> arr={1,2,3,4};
    Node* head= convertarrtodll(arr);
   

    // Delete Head:
    // Node* ans= deletehead(head);
    // while(ans)
    // {
    //     cout<<ans->data<<" ";
    //     ans=ans->next;
    // }

    // Node* answer= deletetail(head);
    // while(answer)
    // {
    //     cout<<answer->data<<" ";
    //     answer=answer->next;
    // }
    //  Node* answer= deletek(head,1);
    // while(answer)
    // {
    //     cout<<answer->data<<" ";
    //     answer=answer->next;
    // }
      Node* answer= deletekthele(head,3);
    while(answer)
    {
        cout<<answer->data<<" ";
        answer=answer->next;
    }
}