#include<iostream>
#include <vector>
using namespace std;

int main()
{   vector<int> arr={1,2,3};
    int n=arr.size();
    int subsets= 1<<n;
    for (int mask=0; mask<subsets; mask++)
    {
        cout<<"{";
        for(int i=0; i<n; i++)
        {
           if(mask&(1<<i))
           {
            cout<<arr[i]<<" ";
           }
        }
        cout<<"}"<<endl;
    }
}

