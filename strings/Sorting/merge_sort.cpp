#include<iostream>
#include<vector>
using namespace std;

 void mergesort(vector<int> &arr,int low,int mid,int high)
 {
       vector<int> temp;
       int left=low;
       int right=mid+1;
       while(left<= mid&& right<=high)
       {
        if (arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

        while(left<=mid)
        
        {
            temp.push_back(arr[left]);
            left++;
        }
         while(right<=high)
        {
            temp.push_back(arr[right]);
            right++;
        }
       
       for (int i=low;i<=high;i++){
        arr[i]=temp[i-low];
       }
    }


void ms(vector<int> &arr, int low, int high)
{
    if(low==high) return;
    int mid=(low+high)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    mergesort(arr,low,mid,high);
}

int main()
{
   vector<int> arr={2,4,3,6,7,5};
   int low=0, high=5;
   ms(arr,low,high);
   for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // Formatting
}


   

