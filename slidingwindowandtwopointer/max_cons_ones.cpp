#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;


int longest(string s, int k)
{
    int maxlen=0;
    int zeros=0;
    int l=0, r=0;
    while(r<s.size())
    {
        if(s[r]==0)
        {
             zeros++;
        }
        if(zeros>k)
        {
            if(s[l]==0) zeros--;
            l++;
        }
        if(zeros<=k)
        {
            maxlen=max(maxlen,r-l+1);
        }
        r++;
    }
return maxlen;
}
int main()
{
    string s={0,1,0,1,0};
    int k=2;
    int length= longest(s,k);
    cout<<length<<endl;
}