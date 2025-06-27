#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


bool jump(vector<int> &arr)
{ 
    int maxind=0;
    for(int i=0;i<arr.size(); i++)
    {
        if(i>maxind)
        {
            return false;
        }
        maxind= max(maxind,arr[i]+i);

    }
    return true;

    
}

int main()
{
    vector<int> arr={1,2,3,1,1,0,2,5} ;
  
    int answer= jump(arr);
    cout<<answer<<endl;


}