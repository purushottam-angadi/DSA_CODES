#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int cookie(vector<int> &Greed,vector<int> &Size)
{
    int l=0, r=0;
    int n=Greed.size();
    int m=Size.size();
    sort(Greed.begin(),Greed.end());
    sort(Size.begin(),Size.end());
    
    
    while(l<m)
    {
        if(Greed[r]<=Size[l])
        {
            r=r+1;
        }
        l=l+1;
    }
    return r;
    
}

int main()
{
    vector<int> Greed={1,5,3,3,4} ;
    vector<int> Size={4,2,1,2,1,3} ;
    int answer= cookie(Greed,Size);
    cout<<answer<<endl;


}