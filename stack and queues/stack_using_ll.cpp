#include<iostream>
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

class Stack{

    Node* top;
    int size;
    public:
   Stack(){
      top=nullptr;
      size=0;
   }
   void push(int x)
   {
    Node* temp= new Node(x,top);
    top=temp;
    size=size+1;
   }

void pop()
{
     Node* temp=top;
     top=top->next;
     delete temp;
     size=size-1;

}
int Size(){
    return size;
}
int Top()
{
    return top->data;
}

};

int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    
    cout << "Top element is: " << st.Top() << endl;
    st.pop();
    cout << "Top after pop: " << st.Top() << endl;
    cout<<st.Size()<<endl;


}