// #include<iostream>
// #include<vector>
// using namespace std;


// int find(vector<int> arr, int goal)
// {
//     if(goal<0) return 0;
//     int l=0, r=0, sum=0, cnt=0;
//     while(r<arr.size())
//     {
//         sum+= arr[r];
//         while (sum>goal)
//         {
//            sum=sum-arr[l];
//            l=l+1;
//         }
    
//         cnt=cnt+ (r-l+1);
//         r=r+1;
        
//     }
//     return cnt;

// }

// int answer(vector<int> &arr, int goal)
// {
//     return (find(arr,goal) - find(arr, goal-1));
// }




// int main()
// {
//    vector<int> arr={1,0,0,1,1,0};
//    int goal=2;
//    int result=answer(arr,goal);
//    cout<<result<<endl;

// }

// for nice subbbarray

#include<iostream>
#include<vector>
using namespace std;


int find(vector<int> arr, int goal)
{
    if(goal<0) return 0;
    int l=0, r=0, sum=0, cnt=0;
    while(r<arr.size())
    {
        sum+= (arr[r]%2);
        while (sum>goal)
        {
           sum=sum-(arr[l]%2);
           l=l+1;
        }
    
        cnt=cnt+ (r-l+1);
        r=r+1;
        
    }
    return cnt;

}

int answer(vector<int> &arr, int goal)
{
    return (find(arr,goal) - find(arr, goal-1));
}




int main()
{
   vector<int> arr={1,0,0,1,1,0};
   int goal=2;
   int result=answer(arr,goal);
   cout<<result<<endl;

}