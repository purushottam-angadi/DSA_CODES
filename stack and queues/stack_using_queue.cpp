#include<iostream>
#include<queue>

using namespace std;


class Stack{
    public:
    queue<int> st;

    void push(int x)
    {
       int s=st.size();
       st.push(x);
      for(int i=0; i<s; i++)
      {
        st.push(st.front());
        st.pop();
      }
    }
    void pop()
    {   
        st.pop();
    }
    int Top(){

      return st.front();
    }
    int Size(){
        return st.size();
    }
};

int main()
{   Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
     cout << "Top element is: " << st.Top() << endl;
    st.pop();
    cout << "Top after pop: " << st.Top() << endl;
    cout<<st.Size()<<endl;

}

