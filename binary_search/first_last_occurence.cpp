#include <iostream>
using namespace std;
int findlo(int arr[], int n, int x)
{
    int high = n - 1;
    int low = 0;
    int res = -1;
    while (high >= low)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == x)
        {
            low=mid+1;       // for first  use (high=mid-1)
            res = mid;
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
    return res;
}
int main()
{
    int arr[] = {3, 4, 13, 13, 13, 20, 40};
    int n = 7;
    int x = 13;
    int ans = findlo(arr, n, x);
    cout<<ans<<endl;
    return 0;
}