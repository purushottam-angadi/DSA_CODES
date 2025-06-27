#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int shortest(vector<int> &arr)
{ 
    int t=0, wttime=0;
    sort(arr.begin(),arr.end());
for(int i=0; i<arr.size();i++)
{
    wttime+=t;
    t+=arr[i];
}
return wttime/arr.size();

    
}

int main()
{
    vector<int> arr={4,3,7,1,2} ;
  
    int answer= shortest(arr);
    cout<<answer<<endl;


}