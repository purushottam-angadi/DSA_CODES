// Count Number of Homogenous Substrings

// #include<iostream>
// #include<vector>
// #include <algorithm>
// #include<unordered_map>
// #define ll long long int
// #define mod 1000000007

// using namespace std;



// class answer{
//     public:
//     int homo(string s)
//     {
//         ll result=0;
//         for (int i=0;i<s.length();)
//         {
//            int count=0;
//            char c=s[i];
//            while(i<s.length()&& c==s[i])
//            {
//             count++;
//             i++;
//            }
//            result+=( (count*(count+1))/2)%mod;

        
//         }
//         return (int) result%mod;

//     }

//     };

// int main()
// {
//    answer a;
//    string s={"abbcccaa"};
//    cout<<a.homo(s)<<endl;
   
// }
// Count Number of Homogenous Substrings

#include<iostream>
#include<vector>
#include <algorithm>
#include<unordered_map>
#define ll long long int
#define mod 1000000007

using namespace std;



class answer{
    public:
    int homo(string s)
    {
        ll result=0;
        int j=0;
        
        for (int i=0;i<s.length();)
        { int count=0;
          while (i<s.length() && s[i]==s[j])
          {
            count++;
            j++;
          }
          i=j;
          result+=( (count*(count+1))/2)%mod;
        }
     return (int)result%mod;
    }
        };

int main()
{
   answer a;
   string s={"abbcccaa"};
   cout<<a.homo(s)<<endl;
   
}







