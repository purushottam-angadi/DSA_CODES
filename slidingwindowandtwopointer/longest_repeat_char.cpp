#include<iostream>
#include<string>
#include<vector>
using namespace std;


int longest(string s, int k)
{   int maxlen=0;
    int maxf=0;
    int l=0, r=0;
    vector<int> hash(26,0);
    while(r<s.size())
    {
        hash[s[r]-'A']++;
        maxf=max(maxf, hash[s[r]-'A']);

        if((r-l+1)- maxf>k)
        {
            hash[s[l]-'A']--;
            l=l+1;
        }
         if((r-l+1)- maxf<=k)
        {
            maxlen=max(maxlen,r-l+1);
        }
        r++;
}
return maxlen;
}

int main()
{
    string s="AAAABBCCDD";
    int k=2;
    int length= longest(s,k);
    cout<<length<<endl;
}