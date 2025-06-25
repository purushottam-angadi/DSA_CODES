#include<iostream>
using namespace std;




// int main()
// {
//     int n=13;
//     int cnt=0;
//     while(n>1)
//     {
//         if(n&1)
//         {
//            cnt++;
          
//         }
//          n=n>>1;

//     }
//     if(n==1) cnt+=1;
//     cout<<cnt<<endl;
// }

int main()
{
    int n=13;
    int cnt=0;
    while(n!=0)
    {
       n= n&(n-1);
       cnt++;

    }
  
    cout<<cnt<<endl;
}