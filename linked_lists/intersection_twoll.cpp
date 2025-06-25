#include <iostream>
#include <vector>
#include <stack>
#include <bits/stdc++.h>
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
Node *intersection(Node *head1, Node *head2)
{
    Node *t1 = head1;
    Node *t2 = head2;
    while (t1 != t2)
    {
        t1 = t1->next;
        t2 = t2->next;
        if (t1 == t2)
            return t1;
        if (t1 == NULL)
            t1 = head2;
        if (t2 == NULL)
            t2 = head1;
    }
    return t1;
}

int main()

{
    vector<int> arr1 = {2, 3, 4, 5};

    Node *head1 = convertarrtoll(arr1);
    Node* newhead1=head1->next->next;
    Node* head2= new Node(5);
    Node* newhead2=head2;
    head2->next=newhead1;
    Node *answer = intersection(head1, head2);
    cout << answer->data;
}
// another approach is hashing but space complexity increases
// we store the node value and traverse both the ll once and check if the node is repeated


// another approach:-difference in length
// calcualte both lengths, subtract;
// check which one is greater
// if L1>L2 the move a pointer from head of list1 to L1-L2 distance
// both pointer of the ll 1 and 2 will be pointing at the same line(refer video)
// now traverse with both pointers to get an intersection
