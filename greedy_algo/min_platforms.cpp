#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int platforms(vector<int> &arr,vector<int> &dep )
{
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());
    int i=0, j=0, maxcount=0, count=0;
    while(i<arr.size())
    {
        if(arr[i]<= dep[j])
        {
            count++;
            i++;
        }
        else{
            count--;
            j++;
        }
        maxcount=max(maxcount,count);
    }
    return maxcount;
}

int main()
{
    vector<int> arr={900,955,1100,945,1500,1800};
    vector<int> dep={920,1130,1150,1200,1900,2000};
    cout<<platforms(arr,dep)<<endl;
}

