#include <iostream>
#include <stack>
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
            while(!st.empty() && priority(st.top())>= priority(s[i]))
            {
                ans+=st.top();
                st.pop();
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

    int main()
    {
        string s = "(p+q+m+n)";
        cout << "Infix expression: " << s<< endl;
        string result = infixtopost(s);
        cout << "Post expression: " << result<< endl;
    }