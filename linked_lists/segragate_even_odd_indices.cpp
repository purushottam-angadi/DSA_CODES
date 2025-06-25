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



// Node* evenodd(Node* head,vector<int> &arr2)
// {
//     Node* temp=head;
//     while(temp!=NULL && temp-> next!= NULL)
//     {
//         arr2.push_back(temp->data);
//         temp=temp->next->next;
//     }
//     if(temp)
//     {
//         arr2.push_back(temp->data);
//     }
//     temp=head->next;

//     while(temp!=NULL && temp-> next!= NULL)
//     {
//         arr2.push_back(temp->data);
//         temp=temp->next->next;
//     }
//     if(temp)
//     {
//         arr2.push_back(temp->data);
//     }

//     temp=head;
//   int i=0;
//     while(temp)
//     {
//         temp->data=arr2[i];
//         i++;
//         temp=temp->next;
//     }
//     return head;

// }
Node* evenodd(Node* head)
{
  Node* odd=head;
  Node* even=head->next;
  Node* secondhead=head->next;
  while(even!=NULL && even->next!=NULL)
  {
    odd->next=odd->next->next;
    odd=odd->next;
    even->next=even->next->next;
    even=even->next;
  }
  odd->next=secondhead;
  return head;

}


int main()

{
    vector<int> arr = {1,2,3,4,5,6,7,8};
    Node *head = convertarrtoll(arr);
    // vector<int> arr2 = {};
    // Node* answer=evenodd(head,arr2);
    // while(answer)
    // {
    //     cout<<answer->data;
    //     answer=answer->next;
    // }
    Node* answer=evenodd(head);
    while(answer)
    {
        cout<<answer->data;
        answer=answer->next;
    }


}

   