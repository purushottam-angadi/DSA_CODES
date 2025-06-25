#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

string digit(string s)
{
    int n=s.size();
    int k=3;
    stack<char> st;

    for (int i=0;i<n;i++)
    {
         while(!st.empty() && k>0 && (st.top() -'0') >( s[i]-'0'))
         {
            st.pop();
            k--;
         }
         st.push(s[i]);
    }

 while(!st.empty()&& k>0)
 {
    st.pop();
    k--;
 }
 if(st.empty()) return "0";

 else{
    string res="";
    while(!st.empty())
    {
        res=res+st.top();
        st.pop();
    }
    while(res.size()!=0 && res.back()=='0')
    {
       res.pop_back();
    }
    reverse(res.begin(),res.end());
    return res.empty() ? "0": res; 
 }

}

int main()
{
    string s="7654321";
    string answer= digit(s);
    cout<<answer<<endl;


}