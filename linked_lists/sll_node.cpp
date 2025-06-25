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

int main()
   
{ 
    vector<int> arr= {2,3,4};
    Node* x= new Node(arr[1]);
    cout<<x->data<<endl;

}
