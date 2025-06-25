#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *convertarrtoll(vector<int> &arr)
{
    if (arr.empty())
        return nullptr;
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* sort012(Node* head)
{
   Node* zerohead= new Node(-1);
   Node* onehead= new Node(-1);
   Node* twohead= new Node(-1);
   Node* one=onehead;
   Node* two=twohead;
   Node* zero=zerohead;
   Node* temp=head;
   if(head==nullptr && head->next==nullptr) return head;
   while(temp)
{ 
   if(temp->data==0)
   {
    zero->next=temp;
    zero=temp;
   }
  else if(temp->data==1)
   {
    one->next=temp;
    one=temp;
   }
   else if(temp->data==2)
   {
    two->next=temp;
    two=temp;
   }
   temp=temp->next;
}

   if(onehead->next)
   {
         zero->next=onehead->next;
   }
   else
   {
     zero->next=twohead->next;
   }
   one->next=twohead->next;
   two->next=nullptr;
 
   Node* newhead =zerohead->next;

   delete zerohead;
   delete onehead;
   delete twohead;
   return newhead;
}
 



int main()

{
    vector<int> arr = {0,1,2,0,0,2,0,1};
    Node *head = convertarrtoll(arr);

    Node* answer=sort012(head);
    while(answer)
    {
        cout<<answer->data;
        answer=answer->next;
    }


}

   