#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minsra(int arr[], int n)
{
    int low = 0, high = n - 1;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[low] <= arr[mid] && arr[high] >= arr[mid])
        {
            ans = arr[low];
            return low;
        }

        if (arr[low] <= arr[mid])
        {
            ans = min(ans, arr[mid]);
            low = mid + 1;
        }
        else
        {
            ans = min(ans, arr[mid]);
            high = mid - 1;
        }
    }
   
    return low;
}

int main()
{
    int arr[] = {5,6,7,3,4};
    int n =5;
    int answer = minsra(arr, n);
    cout << answer <<endl;
}