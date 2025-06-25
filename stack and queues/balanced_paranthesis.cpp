#include<iostream>
#include<stack>
using namespace std;



int valid(string s)
{
   stack<char> st;
   for(int i=0; i<s.size(); i++)
   {
    if(s[i]=='('|| s[i]=='{'||s[i]=='[' )
    {
        st.push(s[i]);
    }
    else 
    { 
        if(st.empty()){
        return false;
        }
     char ch=st.top();
     st.pop();
    if(ch=='('&& s[i]==')' ||ch=='[' && s[i]==']' ||ch=='{'&& s[i]=='}' )
    {
         continue;
    }
    else{
        return false;
    }


    }

   }
   return st.empty();

}

int main()
{
    string s="()[{}()]";
     if(valid(s))
    cout<<"True"<<endl;
    else
    cout<<"False"<<endl;

}