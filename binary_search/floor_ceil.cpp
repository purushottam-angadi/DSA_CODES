#include <iostream>
using namespace std;

int floor(int arr[], int n, int target)
{
    int low = 0, high = n - 1;
    int mid ;
    int ans = -1;
    while (high >= low)
    {
        mid = (low + high) / 2;
        if (arr[mid] <= target)
        {
           
            low = mid + 1;
            ans = arr[mid];
        }
        else
        {
            high = mid - 1;;
        }
    }
    return ans;
}
int ceil(int arr[], int n, int target)
{
    int low = 0, high = n - 1;
    int mid ;
    int ans = -1;
    while (high >= low)
    {
        mid = (low + high) / 2;
        if (arr[mid] >= target)
        {
           
            high = mid - 1;
            ans = arr[mid];
        }
        else
        {
            low = mid + 1;
         
        }
    }
    return ans;
}
int main()
{
    int arr[] = {1,3,5,7,9,11};
    int n = 5;
    int target = 8;
    int ans1 = floor(arr, n, target);
    int ans2 = ceil(arr, n, target);
    cout << "The floor is"<< ans1 <<"The ceil is"<<ans2<<endl;
    return 0;
}