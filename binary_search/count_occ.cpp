/*
MY CODE:-
#include <iostream>
using namespace std;
int findlo(int arr[], int n, int x)
{
    int high = n - 1;
    int low = 0;
    int res1 = -1;
    while (high >= low)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == x)
        {
            low=mid+1;       // for first  use (high=mid-1)
            res1 = mid;
        }
        else if(arr[mid]>=x)
        {
            high= mid-1; 
        
        }
        else
        {
            low=mid+1;
        }
    }
    return res1;
}
int findfo(int arr[], int n, int x)
{
    int high = n - 1;
    int low = 0;
    int res2 = -1;
    while (high >= low)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == x)
        {
            high=mid-1;       // for first  use (high=mid-1)
            res2 = mid;
        }
        else if(arr[mid]>=x)
        {
            high= mid-1; 
        
        }
        else
        {
            low=mid+1;
        }
    }
    return res2;
}
int main()
{
    int arr[] = {3, 4, 13, 13, 13, 20, 40};
    int n = 7;
    int x = 13;
    int ans1 = findlo(arr, n, x);
    int ans2 = findfo(arr, n, x);
    cout<<ans1-ans2+1<<endl;
    return 0;
}
*/ 
//STRIVER' CODE;
#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int> &arr, int n, int k) {
    int low = 0, high = n - 1;
    int first = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] == k) {
            first = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else if (arr[mid] < k) {
            low = mid + 1; // look on the right
        }
        else {
            high = mid - 1; // look on the left
        }
    }
    return first;
}

int lastOccurrence(vector<int> &arr, int n, int k) {
    int low = 0, high = n - 1;
    int last = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] == k) {
            last = mid;
            //look for larger index on the right
            low = mid + 1;
        }
        else if (arr[mid] < k) {
            low = mid + 1; // look on the right
        }
        else {
            high = mid - 1; // look on the left
        }
    }
    return last;
}


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    int first = firstOccurrence(arr, n, k);
    int last = lastOccurrence(arr, n, k);
    return {first, last};
}

int count(vector<int>& arr, int n, int x) {
    pair<int, int> ans = firstAndLastPosition(arr, n, x);
    if (ans.first == -1) return 0;
    else  return (ans.second - ans.first + 1);
}

int main()
{
    vector<int> arr =  {2, 4, 6, 8, 8, 8, 11, 13};
    int n = 8, x = 1;
    int ans = count(arr, n, x);
    cout << "The number of occurrences is: "
         << ans << "\n";
    return 0;
}

