#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


 vector<int> mincoins(int v)
{
   int den[]={1,2,5,10,20,50,100,500,1000};
   int n=9;
   vector<int> ans;
   for(int i=n-1; i>=0; i--)
   {
      while(v>=den[i])
      {
         v=v-den[i];
         ans.push_back(den[i]);
      }
   }
    return ans;
}

int main()
{
    int v=49;
    vector<int> answer= mincoins(v);
   for(int i=0; i<answer.size(); i++)
   {
       cout<<answer[i]<<endl;
   }


}