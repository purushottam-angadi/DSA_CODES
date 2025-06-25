#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sqrt(int n)
{
    int low=1 , high= n;
    int ans;
    while(low<=high)
    {
        int mid= (high+low)/2;
        if (mid*mid<=n)
        {
        
            low=mid+1;
        }
        else 
        {
            high=mid-1;

        }

    }
    return high;  //for square root the answer will be high itself
}

int main()
{
    int n=36;
    int answer=sqrt(n);
    cout<<answer<<endl;
}
