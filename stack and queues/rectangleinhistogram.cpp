#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
#include<vector>

using namespace std;

int area(vector<int> arr)
{
    int n= arr.size();
    stack<int> st;
    int maxi=0;

    for (int i=0; i<n ;i++)
    {
        while(!st.empty() && arr[st.top()]> arr[i])
        {
            int element=st.top();
            st.pop();
            int nse=i;
            int pse= st.empty() ? -1: st.top();
            maxi=max(arr[element]*(nse-pse-1),maxi);
        } 
        st.push(i);
    }
    while(!st.empty())
    {
       int nse=n;
        int element=st.top();
            st.pop();
            int pse= st.empty() ? -1: st.top();
       maxi=max(arr[element]*(nse-pse-1),maxi);
    }
    return maxi;
}

int main()
{
    vector<int> arr={3,2,10,11,5,10,6,3};
    int answer= area(arr);
    cout<<answer<<endl;

}