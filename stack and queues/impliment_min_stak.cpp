#include<iostream>
#include<stack>
using namespace std;

// class st{
//     public:
//     stack<pair<int,int>> st;

//     void push(int x)
//     {
//         if (st.empty())
//     {
//         st.push({x,x});
//     }
//         else 
//         st.push({x,min(x,st.top().second)});
//     }

//     int getmin()
//     {
//        return  st.top().second;
//     }
//     int TOP()
//         {
//             return st.top().first;
//         }
    
// };
class minst{
    public:
    stack<int> st;
    long min;

    void push(int x)
    {
        if(st.empty())
        {  
             min=x;
            st.push(x);
         
        }
        else{ 
        if(x>min) st.push(x);
        else 
        {
            st.push(2*x-min);
            min=x;
        }
        }
    }
   void pop(){
    
        if(st.empty())
        {  
             return ;
         
        }
        else
        {
           int y=st.top();
           st.pop();
           if(y<min)
           {
            min=2*min-y;
           }
        }

    }
    int TOP()
    {
        if(st.empty())
        return -1;
        if(st.top()< min)
        {
            return min;
        }
        else
        return st.top();

    }
    int getmin()
    {
        return min;
    }
    
};

int main() {
    minst s;

    // Pushing elements
    s.push(5);
    s.push(3);
    s.push(7);
    s.push(5);

    // Accessing top element
    cout << "Top Element: " << s.TOP() << endl;

    // Accessing minimum element
    cout << "Minimum Element: " << s.getmin() << endl;

    return 0;
}
