// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<vector>
// using namespace std;

// class solution{
//     public:
//     bool anagram(vector<string> &v)
//     {    
//         int n=v[0].size();
//        for(char c : v[0])
//        { size_t pos=v[1].find(c);
//         if (pos!=string::npos)
//         {
//             v[1].erase(pos,1);
//         }
//         else return false;
//        }
//        return true;
//     }
// };
// int main()
// {
//     solution str;
//     vector<string> v={"paj", "jar"};
//     cout<<str.anagram(v)<<endl;


// }
// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<vector>
// using namespace std;

// class solution{
//     public:
//     bool anagram(vector<string> &v)
//     {    
      
//        sort(v[0].begin(),v[0].end());
//        sort(v[1].begin(),v[1].end());
//        if (v[0]==v[1])
//        {
//         return true;
//        }
//        else return false;
//     }     
// };
// int main()
// {
//     solution str;
//     vector<string> v={"raj", "jar"};
//     cout<<str.anagram(v)<<endl;


// }

#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool anagram(vector<string> &v) {
        if (v[0].size() != v[1].size()) return false; // If lengths differ, not an anagram

        unordered_map<char, int> freq;
        
        // Count frequency of characters in the first string
        for (char c : v[0]) {
            freq[c]++;
        }

        // Decrement frequency using the second string
        for (char c : v[1]) {
            if (freq[c] == 0) return false; // If character doesn't exist in map, not an anagram
            freq[c]--;
        }

        return true;
    }
};

int main() {
    Solution str;
    vector<string> v = {"raj", "jar"};
    cout << str.anagram(v) << endl;  // Output: 1 (true)
}