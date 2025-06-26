#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> findNSE(vector <int> arr)
{
vector<int> nse(arr.size());
stack<int> st;
for(int i=arr.size()-1; i>=0; i--)
{
   while(!st.empty() && arr[st.top()]>=arr[i])
   {
    st.pop();
   }
   if(st.empty()) nse[i]=arr.size();
   else nse[i]=st.top();
   st.push(i);
}
return nse;
}

vector<int> findPSEE(vector <int> arr)
{
    vector<int>pse(arr.size());
stack<int> st;
for(int i=0; i<arr.size(); i++)
{
   while(!st.empty() && arr[st.top()]>arr[i])
   {
    st.pop();
   }
   if(st.empty()) pse[i]=-1;
   else pse[i]=st.top();
   st.push(i);
}
return pse;
}

int sum(vector <int> arr)
{
 vector<int> nse=findNSE(arr);
 vector<int> pse=findPSEE(arr);
long long total=0, mod =int(1e9+7);

 for(int i=0;i<arr.size();i++)
 {
    int left=i-pse[i];
    int right=nse[i]-i;
    total=(total+ (right*left*arr[i])%mod)%mod;

 }
 return total;
     
}

int main()
{
    vector<int> arr={1,1};
    int summ=sum(arr);
    cout<<summ<<endl;
    
}