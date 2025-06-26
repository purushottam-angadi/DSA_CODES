#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> findNGE(vector <int> arr)
{
vector<int> nge(arr.size());
stack<int> st;
for(int i=arr.size()-1; i>=0; i--)
{
   while(!st.empty() && arr[st.top()]<=arr[i])
   {
    st.pop();
   }
   if(st.empty()) nge[i]=arr.size();
   else nge[i]=st.top();
   st.push(i);
}
return nge;
}

vector<int> findPGEE(vector <int> arr)
{
    vector<int>pge(arr.size());
stack<int> st;
for(int i=0; i<arr.size(); i++)
{
   while(!st.empty() && arr[st.top()]<arr[i])
   {
    st.pop();
   }
   if(st.empty()) pge[i]=-1;
   else pge[i]=st.top();
   st.push(i);
}
return pge;
}

int sum(vector <int> arr)
{
 vector<int> nse=findNGE(arr);
 vector<int> pge=findPGEE(arr);
long long total=0, mod =int(1e9+7);

 for(int i=0;i<arr.size();i++)
 {
    int left=i-pge[i];
    int right=nse[i]-i;
    total=(total+ (right*left*arr[i])%mod)%mod;

 }
 return total;
     
}

int main()
{
    vector<int> arr={3,1,2,4};
    int summ=sum(arr);
    cout<<summ<<endl;
    
}