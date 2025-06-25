#include<iostream>
#include <vector>
using namespace std;

int main()
{   int num=36;
    vector<int> a={};
    for(int i=1; i*i<=num;i++)
    {
       if(num%i==0) 
       {
        a.push_back(i);
       if(i!=(num/i))
       {
        a.push_back(num/i);
       }
       }
    }

    for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
}


  
}