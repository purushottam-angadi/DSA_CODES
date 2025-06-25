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
// int length(Node *head)
// { 
//    int count=0;
//      Node * temp=head;
//     while(temp)
//     {
//         count++;
//         temp=temp->next;
//     }
//     int mid= count/2 ;
//     temp=head;
//      count=0;
//     while(temp)
//     { 
//         count++;
//         temp=temp->next;
//         if(count==mid)
//         {
//           return temp->data;
        
//         }
        

//     }
int middle(Node* head)
{
  Node *slow = head; 
   Node *fast = head; 
  while (fast != NULL && fast->next != NULL) {
       
        slow = slow->next; 
        
        fast = fast->next->next; 
    }
    return slow->data;

}
   


int main()
   
{ 
    vector<int> arr= {1,2,3,4,5};
    Node * head= convertarrtoll(arr);

    int answer= middle(head);
    cout<<answer<<endl;
   

}