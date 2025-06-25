#include <iostream>
#include <vector>
#include <stack>
#include <bits/stdc++.h>
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
    Node* looppoint=nullptr;
    for(int i=1; i<arr.size(); i++)
    {
    Node *temp= new Node(arr[i]);
    mover->next=temp;
    mover=temp;

    if(i==2)
    {
         looppoint=mover;
    }
}
    if(looppoint){
    mover->next=looppoint; 
    }
    
    return head;
    

}
// Node* detectLoop(Node* head)
// {
//     std::unordered_map<Node*,int> nodemap;

//     Node* temp = head;
//     while(temp)
//     {
       
//        if( nodemap.find(temp)!=nodemap.end()) 
//        {
//            return temp;
//        }
//        nodemap[temp]=1;
//        temp=temp->next;
       
//     }
//     return nullptr;
// }
int detectLoop(Node* head)
{
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
      slow=slow->next;
      fast=fast->next->next;

      if(slow==fast)
      {
         int count=1;
         fast=fast->next;
         while(slow!=fast)
         { 
            count++;
            fast=fast->next;
            
         }
         return count;
        
      }
      
}
return 0;
}
    
int main()
   
{ 
    vector<int> arr= {2,3,4,5,6,7,8};
    Node * head= convertarrtoll(arr);
    Node * temp=head;
    if (detectLoop(head)) {
        cout << "Loop detected in the linked list." <<detectLoop(head)<< endl;
    } else {
        cout << "No loop detected in the linked list." << endl;
    }
   
  
}