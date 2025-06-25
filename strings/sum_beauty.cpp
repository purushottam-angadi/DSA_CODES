
#include<iostream>
#include<vector>
#include <algorithm>
#include<unordered_map>

using namespace std;



class answer{
    public:
    int diff(vector<int>& ans)
    {
        int ma=-1;
        int mi=1e9;
        for(int i=0;i<26;i++)
        {
         ma=max(ma,ans[i]);
        if(ans[i]>=1)
        {
        mi=min(mi,ans[i]);
        }
       


            
        }
     return ma-mi;
    }
    int beauty(string s)
    {
       
        int result=0;
        
        for(int i=0;i<s.length();i++)
        {   vector<int> ans(26,0);
            for(int j=i;j<s.length();j++)
        {
            ans[s[j]-'a']++;
            result+=diff(ans);
        }
         
        

        }
        return result;

    }
    };

int main()
{
   answer a;
   string s={"aabcb"};
   cout<<a.beauty(s)<<endl;
}


