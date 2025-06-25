#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;


int longest(string s, int k)
{
    unordered_map<char,int> mpp;
    int maxlen=0;
    int l=0, r=0;
    while(r<s.size())
    {
        mpp[s[r]]+=1;

        if(mpp.size()>k)
        {
            mpp[s[l]]--;
            if(mpp[s[l]]==0) mpp.erase(s[l]);
            l=l+1;
        }
    
        if(mpp.size()<=k)
        {
            maxlen=max(maxlen,r-l+1);
        }
        r++;
    }
return maxlen;
}
int main()
{
    string s={"aaabbccd"};
    int k=2;
    int length= longest(s,k);
    cout<<length<<endl;
}