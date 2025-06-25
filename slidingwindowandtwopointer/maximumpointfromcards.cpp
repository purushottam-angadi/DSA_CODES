#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxpoints(vector<int> &arr, int k)
{
   int lsum=0;
    for(int i=0; i<=k-1;i++)
    {
        lsum=lsum+arr[i];
    }
    int maximum=lsum;
    int rsum=0;
    int rind=arr.size()-1;
     for(int i=k-1; i>=0;i--)
    {
        lsum=lsum-arr[i];
        rsum=rsum+arr[rind];
        rind--;
        maximum=max(maximum,(lsum+rsum));
    }
    return maximum;
    cout << "maxpoints called!" << endl;
}


int main()
{
    vector<int> arr={1, 2, 3, 4, 5, 6};
    int k = 3;
    int points= maxpoints(arr,k);
    // cout<<points<<endl;
    cout << points << endl << flush;


}