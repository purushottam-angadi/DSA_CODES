#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextsmall(vector<int> &arr)
{
 int N= arr.size();
vector<int> nge(arr.size());
stack<int> st;

for (int i=2*N-1; i>=0; i--)
{
    while(!st.empty() && st.top()>=arr[i%N])
    {
    st.pop();
    }
    if(i<N)
    {
    if(st.empty()) nge[i]=-1;
    else 
    nge[i]=st.top();
    }
    st.push(arr[i%N]);

}
return nge;

}

int main()
{
    vector<int> arr={3,10,4,2,1,2,6,1,7,2,9};
    vector<int> answer= nextsmall(arr);
    for (int i = 0; i < answer.size(); i++) {
    cout << answer[i] << " ";
  }
}