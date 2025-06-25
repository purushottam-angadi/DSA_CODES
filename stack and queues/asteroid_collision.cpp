#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> astroid(vector<int> &arr)
{
    stack<int> st;
     

    for (int i=0;i<arr.size();i++)
    {
        if (arr[i]>0) st.push(arr[i]);
        else{
        while(!st.empty() && st.top()>0 && abs(arr[i])>st.top())
        {
            st.pop();
        }
        if(!st.empty() && st.top()>0 && abs(arr[i])==st.top())
        {
            st.pop();
        }
        else if(st.empty() || st.top()<0)
        {
            st.push(arr[i]);
        }
        
    }
}
vector<int> ans(st.size());
    for(int i=st.size()-1; i>=0; i--)
    {
       ans[i]=st.top();
       st.pop();
    }
    return ans;
}

int main()
{
    vector<int> arr={4,7,1,1,2,-3,-7,17,15,-16};
    vector<int> answer= astroid(arr);
    for (int i=0; i<answer.size(); i++)
    {
        cout<<answer[i];
    }
}