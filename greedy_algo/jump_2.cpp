#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int jump(vector<int> &arr)
{ 
   int r=0,l=0,jumps=0;
   while(r<arr.size()-1)   
   {
    int farthest=0;
    for(int i=l; i<=r;i++)
    {
        farthest=max(farthest,i+arr[i]);
    }       
    l=r+1;
    r=farthest;
    jumps=jumps+1;;
    }
return jumps;
}

int main()
{
    vector<int> arr={2,3,1,0,4};

    int answer= jump(arr);
    cout<<answer<<endl;


}