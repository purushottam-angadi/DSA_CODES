#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;



class answer{
    public:
    string removeoutermostparanthesis(vector<string> &v)
    {   
        sort(v.begin(),v.end());
        int n=v.size();
        // string first=v[0] , last=v[n-1];
        string ans="";
        for (int i=0; i<min(v[0].length(),v[n-1].length());i++)
        {
            if (v[0][i]==v[n-1][i])
            {
                ans+=v[0][i];
            }
            else return ans;
        }
    }

    };

int main()
{
    answer a;
    vector<string> v={"flower", "flow", "float"};
    cout<< a.removeoutermostparanthesis(v)<<endl;
}


// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         if (strs.empty()) return ""; // Handle empty input

//         string prefix = strs[0]; // Start with the first string

//         for (int i = 1; i < strs.size(); i++) {
//             int j = 0;
//             while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
//                 j++;
//             }
//             prefix = prefix.substr(0, j); // Update prefix

//             if (prefix.empty()) break; // Stop if prefix becomes empty
//         }

//         return prefix;
//     }
// };

// int main() {
//     Solution sol;
//     vector<string> words = {"flower", "flow", "flight"};

//     cout << "Longest Common Prefix: " << sol.longestCommonPrefix(words) << endl;

//     return 0;
// }
