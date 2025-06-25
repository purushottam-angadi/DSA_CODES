#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node *convertarrtodll(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node *deleteocc(Node *head, int k)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == k)
        {
            if (temp == head)
            {
                head = head->next;
                head->back=nullptr;
            }
            Node *nextnode = temp->next;
            Node *prevnode = temp->back;
            if (nextnode != NULL)
                nextnode->back = prevnode;
            if (prevnode != NULL)
                prevnode->next = nextnode;

            Node *toDelete = temp;
            temp = nextnode; 
            delete toDelete;
        }
        
        else{
            temp = temp->next;
        }
    
    }
    return head;
}

int main()
{
    vector<int> arr = {1, 5, 3, 5, 4, 5};
    Node *head = convertarrtodll(arr);

    Node *answer = deleteocc(head, 5);
    while (answer)
    {
        cout << answer->data << " ";
        answer=answer->next;
    }
}