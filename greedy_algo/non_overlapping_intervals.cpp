#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct data
{

    int start;
    int end;
    int position;
};

bool static comp(vector<int> &a,vector<int> &b )
{
    return a[1] < b[1];
}
int non(vector<vector<int>> &interval)
{ 

   sort(interval.begin(), interval.end(),comp);
   int count=1;
   int freetime=interval[0][1];
   for(int i=1; i<interval.size();i++)
   {
    if(freetime<=interval[i][0])
    {
        count++;
        freetime=interval[i][1];

    }
   
   }
    return interval.size()-count;
}

int main()
{
    vector<vector<int>> interval={{0,5},{3,4},{1,2},{5,9},{5,7},{7,9}};
    int answer = non(interval);
    cout << answer << endl;
}