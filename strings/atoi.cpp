// Roman Number to Integer and vice versa
// Maximum nesting depth of paranthesis
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class answer
{
public:
    int atoi(string s)
    {
        int ans = 0;
        for (int i = 0; i < s.length(); i++)
        {

            if (s[i] == '-')
            {
                i++;
            }

             if (s[i] >= '0' && s[i] <= '9')
            {
                int d = s[i] - '0';
                ans = ans * 10 + d;
            }
            else
                return -1;
        }
        if(s[0]=='-') return -ans;
        else return ans;
    }
    };

    int main()
    {
        answer a;
        string s = {"-2121"};
        cout << a.atoi(s) << endl;
    }
