#include<iostream>
#include <vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{   int num=36;
    vector<int> a={};
    for(int i=2; i<=sqrt(num);i++)
    {
       if(num%i==0) 
       {
        a.push_back(i);
    
       while(num%i==0)
       {
           num=num/i;
       }
       }
    }
    if(num!=1) a.push_back(num);
    for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
}


  
}