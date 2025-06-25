
#include<iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{  int num=30;
    vector<int> arr(num,1);
    
    arr[0]=arr[1]=0;
    

    for (int i=2; i<=sqrt(num);i++)
    {
        if(arr[i]==1)
    {
         for(int j=i*i ; j<=num; j+=i)
         {
            arr[j]=0;
         }
    }
    }
    
    for(int i=2; i<num;i++)
    {
        if(arr[i]==1)
        {
            cout<<i<<endl;
        }
    }
}