 



#include <iostream>
#include <stack>
#include <string>

using namespace std;

int priority(char c) {
  if (c == '^')
    return 3;
  else if (c == '/' || c == '*')
    return 2;
  else if (c == '+' || c == '-')
    return 1;
  else
    return -1;
}

string posttoinfix(string s)
{
   int i=s.size()-1; stack<string> st;

   while(i>=0)
   {
    if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9')
    {
        st.push(string(1,s[i]));
    }
    else
    {
        string t1=st.top();
        st.pop();
        string t2=st.top();
        st.pop();
        string con=  t1 + t2 + s[i] ;
        st.push(con);
        
    }
    i--;
   }
   return st.top();
}

    int main()
    {
        string s = "/-ab*+def";
        cout << "Infix expression: " << s<< endl;
        string result = posttoinfix(s);
        cout << "Post expression: " << result<< endl;
    }