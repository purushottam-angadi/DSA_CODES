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
// Node* reversell(Node* head)
// { 
//   Node* temp=head;
//   stack<int> s;
//   while(temp){

//   s.push(temp->data);
//   temp=temp->next;
//   }

//   temp=head;
//   while(temp)
//   {
//     temp->data=s.top();
//     s.pop();
//     temp=temp->next;
//   }
//   return head;

//  Node* reversell(Node* head)  //Method Iterative
// { 
//   Node* prev= NULL;
//   Node* temp=head;
//    Node* front=head;;
//   while(temp){
//   front=temp->next;
//   temp->next=prev;
//   prev=temp;
//   temp=front;
//   }

// return prev;

// }
 Node* reversell(Node* head)  //Method Recursion
{

  if(head==NULL || head->next==NULL) return head;
   
  Node * newhead=reversell(head->next)  ;

 
 Node* front=head->next;
 front->next=head;
 head->next=nullptr;
 return newhead;

}

bool pali(Node *head)
{
Node* slow = head;
    Node* fast = head;
    
    // Traverse the linked list to find the
    // middle using slow and fast pointers
    while (fast->next != NULL && fast->next->next != NULL) {
        
        // Move slow pointer one step at a time
        slow = slow->next;  
        
        // Move fast pointer two steps at a time
        fast = fast->next->next;  
    }
    Node * newhead=reversell(slow->next);
    Node* first=head;
    Node* second=newhead;
    while (second != NULL) {
        
        // Compare data values of 
        // nodes from both halves
        
        // If values do not match,
        // the list is not a palindrome
        if (first->data != second->data) {
            
            // Reverse the second half 
            // back to its original state
            reversell(newhead);  
            
            // Not a palindrome
            return false;
        }
        
         // Move the first pointer
        first = first->next; 
        
        // Move the second pointer
        second = second->next;  
    }
    
    // Reverse the second half
    // back to its original state
    reversell(newhead);  
    
    // The linked list is a palindrome
    return true;  
}



int main()
   
{ 
    vector<int> arr= {1,2,2,1};
    Node * head= convertarrtoll(arr);
  
 

    cout<<pali(head)<<endl;
  
}