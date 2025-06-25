 #include <iostream>
#include <stack>
#include<string>
#include<algorithm>

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


string infixtopost(string s)
{
    
    int i = 0;
    stack<char> st;
    string ans = "";
    while (i < s.size())
    {
        if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9')
        {
            ans = ans + s[i];
        }

        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans = ans + st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            if(s[i]=='^')
            {
                  while(!st.empty() && priority(st.top())>=priority(s[i]))
            {
                ans+=st.top();
                st.pop();
            }
                
            }
           else {
             while(!st.empty() && priority(st.top())>priority(s[i]))
            {
                ans+=st.top();
                st.pop();
            }
           }
            st.push(s[i]);
            }
            i++;
        }
         while (!st.empty()) {
         ans+= st.top();
          st.pop();
          }
        return ans;
    }

string infixtoprefix(string infix)
    {
        int l = infix.size();

  // Reverse infix
  reverse(infix.begin(), infix.end());

  // Replace ( with ) and vice versa
  for (int i = 0; i < l; i++) {

    if (infix[i] == '(') {
      infix[i] = ')';
      i++;
    } else if (infix[i] == ')') {
      infix[i] = '(';
      i++;
    }
  }
  string prefix = infixtopost(infix);

  // Reverse postfix
  reverse(prefix.begin(), prefix.end());

  return prefix;
}
 

    int main()
    {
        string s =  ("(p+q)*(c-d)");
        cout << "Infix expression: " << s<< endl;
        string result = infixtoprefix(s);
        cout << "Pre expression: " << result<< endl;
    }