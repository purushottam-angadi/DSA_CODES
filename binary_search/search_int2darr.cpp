#include <bits/stdc++.h>
using namespace std;

bool binarySearch (vector<int>& nums, int target)
{
    int n = nums.size(); //size of the array
    int low = 0, high = n - 1;

    // Perform the steps:
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) return true;
        else if (target > nums[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return false;
}


bool search(vector<vector<int>>& matrix, int target)
{
   int  n=matrix.size();
    int m=matrix[0].size();
     for (int i = 0; i < n; i++) {
        if (matrix[i][0] <= target && target <= matrix[i][m - 1]) {
            return binarySearch(matrix[i], target);
        }
    }
    return false;
}
int main()
{
    vector<vector <int>> matrix={{1,2,3,4},{2,7,8,9},{9,10,11,12}};
    int x=8;
    bool answer=search(matrix,x);
    cout<<answer<<endl;

}
