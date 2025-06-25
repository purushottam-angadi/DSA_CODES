//Roman Number to Integer and vice versa
//Maximum nesting depth of paranthesis 
#include<iostream>
#include<vector>
#include <algorithm>
#include<unordered_map>

using namespace std;



class answer{
    public:
    int rti(string s)
    {
        unordered_map<char,int> roman={{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
                                       {'C', 100}, {'D', 500}, {'M', 1000}};
        int result=0;
        

      for (int i = 0; i < s.length(); i++) {
            if (roman[s[i]] < roman[s[i + 1]]) {
                result -= roman[s[i]];  // Subtract if smaller comes before larger
            } else {
                result += roman[s[i]];
            }
        }
        return result;
    }



    };

int main()
{
   answer a;
   string s={"IV"};
   cout<<a.rti(s)<<endl;
}


