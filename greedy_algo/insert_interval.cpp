#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> answer( vector<vector<int>> &arr,vector<int> &newint)
{
    vector<vector<int>> ans;
    int i=0;
    while(i<arr.size() && arr[i][1]<newint[0])
    {
        ans.push_back(arr[i]);
        i=i+1;   
    }
    while(i<arr.size() && arr[i][0] <=newint[1])
    {
        newint[0]= min(arr[i][0], newint[0]);
        newint[1]= max(arr[i][1], newint[1]);
        i++;
    }
    ans.push_back(newint);

    while(i<arr.size())
    {
        ans.push_back(arr[i]);
        i++;
    }
    return ans;
}
int main()
{
     vector<vector<int>> arr = {{1, 2},{3,4},{5,7},{8,10},{12,16}};
     vector<int> newint={6,8};
     vector<vector<int>> ans= answer(arr,newint);
     
    for (int i = 0; i < ans.size(); i++) {
        cout << "[" << ans[i][0] << ", " << ans[i][1] << "] ";
    }
    cout << endl;


}