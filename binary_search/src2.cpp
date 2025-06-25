#include <iostream>
using namespace std;

bool sra(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    int mid = -1;

    while (high >= low)
    {
        mid = (low + high) / 2;
        if (arr[mid] == x)
            return true;

        else if (arr[mid] == arr[low] && arr[mid] == arr[high])
        {
            low = low + 1;
            high = high - 1;
            continue;
        }
        if (arr[low] <= arr[mid])
        {
            if (arr[low] <=x && arr[mid] >= x)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= x && arr[high] >=x)
            {
                low = mid + 1;
            }
            else
            {
                
                high = mid - 1;
            }
        }
    }
        return false;
    }
    
int main()
{
    int arr[] = {3, 1, 2, 3, 3, 3, 3};
    int n = 5;
    int x = 1;
    bool ans = sra(arr, n, x);
    cout<<ans<<endl;
    return 0;
}