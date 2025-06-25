#include <iostream>
#include <string>
#include <vector>
using namespace std;

int maxlength(string s)
{
    vector<int> hash(256,-1);
    int n=s.size();
    int maxlen=0;
    int start=0;
    for(int end=0; end<n; end++)
    {
        if(hash[s[end]]!=-1)
        {
            if(hash[s[end]]>=start)
            {
                start=hash[s[end]]+1;
            }

        }
          hash[s[end]]=end;
          maxlen=max(maxlen,end-start+1);
    }
    return maxlen;

}

int main() {
    string s = "abcabcbb";
    cout << "Length of longest substring without repeating characters: "
         << maxlength(s) << endl;
    return 0;
}



// // #include <iostream>
// #include <unordered_map>
// #include <string>
// using namespace std;

// int maxlength(string s) {
//     unordered_map<char, int> hash;
//     int maxlen = 0;
//     int start = 0;

//     for (int end = 0; end < s.length(); ++end) {
//         char ch = s[end];

//         // If character is already in the map and within the current window
//         if (hash.find(ch) != hash.end() && hash[ch] >= start) {
//             start = hash[ch] + 1; // move start to avoid repeat
//         }

//         hash[ch] = end; // update last seen index
//         maxlen = max(maxlen, end - start + 1);
//     }

//     return maxlen;
// }

// int main() {
//     string s = "abcabcbb";
//     cout << "Length of longest substring without repeating characters: "
//          << maxlength(s) << endl;
//     return 0;
// }