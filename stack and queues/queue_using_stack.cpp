#include<iostream>
#include<queue>
#include<stack>

using namespace std;


class Queue{
    public:
    stack<int> s1,s2;


//optimal method;
    void push(int x)
    {
       s1.push(x);
    }
    void pop()
    {   
        if(!s2.empty()) s2.pop();
        else{
            while(s1.size())
            {
                s2.push(s1.top());
                s1.pop();
            }
            s2.pop();
        }
    }
    int Top(){

        if(!s2.empty()) return s2.top();
        else{
            while(s1.size())
            {
                s2.push(s1.top());
                s1.pop();
               
            }
             return s2.top();
         
        }
    }
    int Size(){
        return s1.size() + s2.size();
    }
};

int main()
{   Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
     cout << "Top element is: " << q.Top() << endl;
    q.pop();
    cout << "Top after pop: " << q.Top() << endl;
    cout<<q.Size()<<endl;

}

