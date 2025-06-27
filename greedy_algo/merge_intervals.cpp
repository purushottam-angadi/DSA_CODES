#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> answer( vector<vector<int>> &interval)
{ 
    vector<vector<int>> merged;
    sort(interval.begin(), interval.end());
    vector<int> temp=interval[0];

    for(int i=0; i<interval.size();i++)
    {
        if(interval[i][0]<=temp[1])
        {
            temp[1]=max(interval[i][1],temp[1]);
        }
        else{
            merged.push_back(temp);
            temp=interval[i];
        }
    }
     merged.push_back(temp);
     return merged;

}
int main()
{
     vector<vector<int>> interval = {{1, 2},{3,5},{4,7},{8,10},{12,16}};
     vector<vector<int>> ans= answer(interval);
     
    for (int i = 0; i < ans.size(); i++) {
        cout << "[" << ans[i][0] << ", " << ans[i][1] << "] ";
    }
    cout << endl;


}