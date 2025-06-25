#include<bits/stdc++.h>
using namespace std;


int sum(vector<int> &arr, int div)
{    int n=arr.size();
    int sum=0;
    for(int i=0;i<n;i++)
    { 
        sum+=ceil((double)(arr[i])/(double)(div));
    }
    return sum;
}

int divisor(vector<int> &arr,int x)
{int n=arr.size();
    if(n>x) return -1;
   int low=1, high=*max_element(arr.begin(),arr.end());
   while(low<=high){
   int mid= (low+high)/2;
if (sum(arr,mid)<= x)
{
    high=mid-1;
}
   else low=mid+1;
}
return low;
}


int main()
{
    vector<int> arr={1,2,3,4,5};
    int x=8;
    int answer=divisor(arr,x);
    cout <<answer<<endl;
}