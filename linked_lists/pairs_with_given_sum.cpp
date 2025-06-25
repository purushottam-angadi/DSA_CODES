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
Node* findright(Node* head) {
    while (head->next) {
        head = head->next;
    }
    return head;
}

vector <pair<int,int>> pairs( Node* head,int k)
{
    Node* left =head;
    Node* right= findright(head);
     vector<pair<int, int>> result;

    while(left->data<right->data)
    {
    if(left->data+right->data==k)
    {
        result.push_back({left->data, right->data});
        left=left->next;
        right=right->back;
         

    }
    else if(left->data+right->data<5)
    {
        left=left->next;
    }
    else
    right=right->back;

}
return result;
}

int main()
{
    vector<int> arr={1,2,3,4,9};
    Node* head= convertarrtodll(arr);
   
     vector <pair<int,int>>  answer= pairs(head, 5) ;
     for (auto p : answer) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }

   
}