#include<iostream>
using namespace std;

class Queue
{
    public:
    int start;
    int end;
    int* arr;
    int size;
    int currsize;
 Queue()
 {
    size=10;
    arr= new int[size];
    start=-1;
    end=-1;
    currsize=0;
 }
 void push(int x)
 {
     if (currsize==size)
     {
        cout<<"cannot push"<<endl;
     }
     if (currsize==0)
     {
        start=0;end=0;
     }
     else{
     end=(end+1)%size;
     }
     arr[end]=x, currsize+=1;
 }
 int pop()
 {
    if (currsize==0)
    {
        cout<<"cannot pop"<<endl;
    }
    int ele=arr[start];
    if(currsize==1)
    {
        start=end=-1;
    }
    else{
        start=(start+1)%size;
    }
    currsize--;
    return ele;
 }
 int top()
 {
    if(currsize==0)
    {
       cout<<"no top"<<endl;
    }
    return arr[size];
 }
 int size()
 {
    return currsize;
 }
};