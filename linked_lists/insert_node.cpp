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

Node *insertk(Node *head, int ele, int k)
{
    Node *temp = head;
    int count = 0;
    Node *ELE = new Node(ele);
    while (temp != NULL)
    {
        count++;
        if (count == k-1)
        {
            ELE->next = temp->next;
            temp->next = ELE;
           return head;
            
        }
         temp=temp->next;
    }
    return head;
}
// Node *inserthead(Node *head, int value)
// {

//     Node *temp = new Node(value, head);
//     return temp;
// }

// Node *inserttail(Node *head, int value)
// {
//     Node* final= new Node(value);
//     if (head == NULL)
//         return head;
//     Node *temp = head;
//     while(temp->next!=NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next=final;
//    return head;
// }

int main()

{
    vector<int> arr = {2, 6, 4, 8, 5};
    Node *head = convertarrtoll(arr);

    // // Insert Head:-
    // int value = 5;
    // Node *ans = inserthead(head, value);
    // while (ans != NULL)
    // {
    //     cout << ans->data;
    //     ans = ans->next;
    // }

    // Insert Tail:-
    // int value=9;
    //   Node * answ= inserttail(head,value);
    //   while(answ!=NULL)
    // {
    //     cout<<answ->data;
    // answ=answ->next;
    // }

    // //  Insert at K:-

    Node *answ = insertk(head, 5, 3);
    while (answ != NULL)
    {
        cout << answ->data;
        answ = answ->next;
    }

    // Remove Value:
    // int a=3;
    //       Node * answ= value(head,a);
    //       while(answ!=NULL)
    //     {
    //         cout<<answ->data;
    //     answ=answ->next;
    //     }
}