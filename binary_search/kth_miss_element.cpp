#include <bits/stdc++.h>
using namespace std;
int missing(vector<int> &arr, int n, int k)
{
  int low=0, high=n-1;
  while (low <= high) {
  int mid = (low + high) / 2;
  int missing= arr[mid]- (mid+1);
   if (missing < k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
}
    return k + high + 1;
}
int main()
{
    vector<int> arr={4,7,9,10};
   int  n=4,k=5;
    int ans=missing(arr,n, k);
    cout<<ans<<endl;

}