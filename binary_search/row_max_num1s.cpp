#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int lowerbound(vector<int> arr,int m, int x)
{
      int low = 0, high = m - 1;
    int ans = m;

    while (low <= high) {
        int mid = (low + high) / 2;
       
        if (arr[mid] >= x) {
            ans = mid;
           
            high = mid - 1;
        }
        else {
            low = mid + 1; 
        }
    }
    return ans;
}


int row(vector<vector<int>> &matrix, int n, int m)
{
    int count=0;
    int index=-1;
     
    for(int i=0; i<n;i++)
    {
        int count_ones= m- lowerbound(matrix[i],m,1);
        if (count_ones>count)
        {
            count=count_ones;
            index=i;
        }
    }
    return index;
}



int main()
{
    vector<vector<int>> matrix ={{1,1,1},{0,0,1},{0,0,0}};
    int n=3, m=3;
    int answer=row(matrix,n,m);
    cout<<answer<<endl;
}