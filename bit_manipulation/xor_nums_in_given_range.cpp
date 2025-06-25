// #include<iostream>
// using namespace std;

// int main()
// { 
//     int L=3;
//     int R=5;
//     int ans=0;
//     for(int i=L; i<=R; i++)
//     {
//        ans=ans^i;
//     }

//    cout<<ans<<endl;

// }
#include<iostream>
using namespace std;


int function(int n)
{
   if(n%4==1) return 1;
   else if(n%4==2) return n+1;
   else if(n%4==3) return 0;
   else return n; 
}
int function2(int L,int R)
{
  return function(L-1)^function(R);
}

int main()
{ 
    int L=3;
    int R=5;
    int answer=function2(L,R);
    cout<<answer<<endl;


    
}




