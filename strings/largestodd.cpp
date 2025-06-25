#include<iostream>
#include<vector>
#include <string.h>

using namespace std;



class answer{
    public:
    string largestodd(string s)
    {   int k= s.length()-1;
        string ans=s;
        
        while(k>0)
        {
        if(s[k]%2==0)
        {
            k--;
            ans.pop_back();
        }
        else{
            return ans;
        }
    }
        

    }
   
};

int main()
{
    answer a;
    string s="54456";
    cout<< a.largestodd(s)<<endl;
}