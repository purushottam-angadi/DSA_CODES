// #include <iostream>
// using namespace std;

// class Solution
// {
// public:
//     string removeOuterParentheses(string s)
//     {
//         int count = 0;
//         string ans = "";
//         for (int i = 0; i < s.length(); i++)
//         {
//             if (s[i] == ')')
//                 count--;
//             if (count != 0)
//             {
//                 ans.push_back(s[i]);
//             }

//             if (s[i] == '(')
//                 count++;
//         }
//         return ans;
//     }
// };

// int main()
// {
//     Solution sol;
//     string input = "(()())(())"; // Example input
//     cout << "Processed Output: " << sol.removeOuterParentheses(input) << endl;
//     return 0;
// }
#include<iostream>
#include<vector>
using namespace std;



class answer{
    public:
    string removeoutermostparanthesis(string s)
    {   
        int count=0;
        string ans="";
        for (int i=0;i<s.length();i++)
        {
        if (s[i]==')') count--;
         if (count !=0)
        {
            ans.push_back(s[i]);
        }
         if (s[i]=='(') count ++;
        }
        return ans;
    }

};

int main()
{
    answer a;
    string s="(()())(())";
    cout<< a.removeoutermostparanthesis(s)<<endl;
}