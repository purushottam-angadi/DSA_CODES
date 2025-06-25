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

// Node* removehead(Node* head)
// { if(head==NULL) return head;
//     Node* temp=head;
//     head=head->next;
//     delete temp;
//     return head;
// }
// Node* removetail(Node* head)
// { if(head==NULL || head->next==NULL) return NULL;
//     Node* temp=head;
//     while(temp->next->next!=NULL)
//     {
//        temp=temp->next;
//     }
//     delete temp->next;
//     temp->next=nullptr;
//     return head;

// Node* kth_element(Node* head, int k)
// {
//   if(head==NULL) return head;
//   if(k==1)
//   {
//     Node* temp=head;
//     head=head->next;
//     delete temp;
//     return head;
//   }
//   int count=0; Node* temp=head;Node* prev=nullptr;
//   while(temp!=NULL)
//   {
//     count++;
//     if(count==k)
//     {
//       prev->next=prev->next->next;
      
//       delete temp;
//       return head;
//     }
//     prev=temp;
//     temp=temp->next;
//   }
//   return head;

// }

    
// }
Node* value(Node* head, int a)
{
  if(head==NULL) return head;
  if(head->data==a)
  {
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
  }
   Node* temp=head;Node* prev=nullptr;
  while(temp!=NULL)
  {
    
    if(temp->data==a)
    {
      prev->next=prev->next->next;
      
      delete temp;
      return head;
    }
    prev=temp;
    temp=temp->next;
  }
  return head;

}



int main()
   
{ 
    vector<int> arr= {2,6,8,3,4};
    Node * head= convertarrtoll(arr);
    // Remove Head:-
    // Node * ans= removehead(head);
    // while(ans!=NULL)
    // {
    //     cout<<ans->data;
    // ans=ans->next;
    // }


    // Remove Tail:-
    //   Node * answ= removetail(head);
    //   while(answ!=NULL)
    // {
    //     cout<<answ->data;
    // answ=answ->next;
    // }
    
//  Remove Kth element:-
// int k=2;
//       Node * answ= kth_element(head,k);
//       while(answ!=NULL)
//     {
//         cout<<answ->data;
//     answ=answ->next;
//     }

 // Remove Value:
// int a=3;
//       Node * answ= value(head,a);
//       while(answ!=NULL)
//     {
//         cout<<answ->data;
//     answ=answ->next;
//     }
    
    
  
    
}