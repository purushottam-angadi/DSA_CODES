// SEARCH IN ROTATED SORTED ARRAY 1
#include <iostream>
using namespace std;
int rsa(int arr[], int n, int x)
{
    int high = n - 1, low = 0;
    int mid = -1;
    while (high >= low)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= x && arr[mid] >= x)
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        else
        { 
            if (arr[mid] <= x && x <= arr[high])
            {
                
                low = mid + 1;
            }
            else
            {
               
                high = mid - 1;
            }
        }
        
    }
    return -1;
    }

    int main()
    {
        int arr[] = {5, 6, 7, 8, 3, 4};
        int n = 6, x = 8;
        int ans = rsa(arr, n, x);
        cout << ans << endl;
    }