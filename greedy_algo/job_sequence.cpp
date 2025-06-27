#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct job{
    int id;
    int deadline;
    int profit;

};
bool comp(job val1, job val2)
{
   return val1.profit>val2.profit;
}

pair<int,int> jobseq(vector<job> &arr)
{
    sort(arr.begin(),arr.end(),comp);
    int n=arr.size();
    int count=0;
    int maxdead=0;
    int totalprofit=0;
    for( int i=0;i<n;i++)
    {
         maxdead=max(maxdead,arr[i].deadline);
    }
   vector<int> hash(maxdead + 1, -1);

    for(int i=0; i<n;i++)
    {
        for(int j= arr[i].deadline; j>0; j--)
        {
               if(hash[j]==-1)
               {
                hash[j]=arr[i].id;
                count++;
                totalprofit+=arr[i].profit;
                break;
               }
        }
    }
    return{count,totalprofit};
}
int main()
{
    vector<job> arr={{6,2,80},{3,6,70},{4,6,65},{2,5,60},{5,4,25},{8,2,22},{1,4,20},{7,2,10}};
   pair<int, int> result = jobseq(arr);
cout << "Jobs done: " << result.first << ", Total profit: " << result.second << endl;
}
