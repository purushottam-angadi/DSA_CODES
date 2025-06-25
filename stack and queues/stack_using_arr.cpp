#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class Stack{
   
    public:
     int top;
    int* arr;
    int size;
    Stack(){
        top=-1;
        size=10;
        arr= new int[size];
    }


void push(int x)
{    //if top>=size;
    top=top+1;
    arr[top]=x;
}
int pop()
{
    int x=arr[top];
    top--;
    return x;
}
int Size()
{
    return top+1;
}
int Top()
{
    return arr[top];
}
};

int main()
{
   Stack s;

  s.push(6);
  s.push(3);
  s.push(7);
  cout << "Top of stack is before deleting any element " << s.Top() << endl;
  cout << "Size of stack before deleting any element " << s.Size() << endl;
  cout << "The element deleted is " << s.pop() << endl;
  cout << "Size of stack after deleting an element " << s.Size() << endl;
  cout << "Top of stack after deleting an element " << s.Top() << endl;
  return 0;
}