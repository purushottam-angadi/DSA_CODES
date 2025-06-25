#include<iostream>
using namespace std;

class Node{
 
    public:
    int data;
    Node* next;
    Node(int data1){
       data=data1;
    }
     Node(int data1, Node* next1){
       data=data1;
       next=next1;
    }

};

class Queue{
    public:
    Node* start;
    Node* end;
    int size;
    Queue(){
        start=nullptr;
        end=nullptr;
        size=0;
    }

    void push(int x)
    {
        Node* temp=new Node(x);
        if(start==nullptr && end==nullptr)
        {
            start=temp;
            end=temp;
        }
        else{
        end->next=temp;
        end=temp;
        }
        size++;
    }
    void pop()
    {   if(start==nullptr)
        {
            cout<<"no element"<<endl;
            return;
        }
        Node* temp=start;
        start=start->next;
        delete temp;
        size--;
    }
    int Top(){
        return start->data;
    }
    int Size(){
        return size;
    }
};

int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
     cout << "Top element is: " << q.Top() << endl;
    q.pop();
    cout << "Top after pop: " << q.Top() << endl;
    cout<<q.Size()<<endl;

}

