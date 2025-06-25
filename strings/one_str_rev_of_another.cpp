// #include<iostream>
// #include <algorithm>
// #include<string>

// using namespace std;

// class solution{
//     public:
//     bool rotate(string s, string g)
//     {  int n= s.size(),m=g.size();
//         string med="";
//         if (n!=m)
//         {
//             return false;
//         }
       
//           for (int i=0; i<n; i++)
//           {
//               std::rotate(s.begin(),s.begin()+1,s.end());
//                if(s==g)
//                {
//                 return true;
//                }
               
//           }
//           return false;
//     }
// };
 
// int main()
// {
//     solution str;
//     string s={"abcde"};
//     string g={"cdeab"};
//     cout<< str.rotate(s,g)<<endl;
// }

#include<iostream>
#include <algorithm>
#include<string>

using namespace std;

class solution{
    public:
    bool rotate(string s, string g)
    {  int n= s.size(),m=g.size();
        string med="";
        if (n!=m)
        {
            return false;
        }
          
          for (int i=0; i<n; i++)
          { 
            string st="";
            st= s.substr(i) + s.substr(0,i);
            if (st==g)
            {
                return true;
            }
        }
          return false;
    }
};
 
int main()
{
    solution str;
    string s={"abcde"};
    string g={"cdeab"};
    cout<< str.rotate(s,g)<<endl;
}