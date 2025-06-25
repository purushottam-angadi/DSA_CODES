// #include<iostream>
// #include<string.h>

// using namespace std;



// int main()
// {
//       string s={"1011"};

//       int length=s.length();
//       int res=0;
//       int p=1;
//       for(int i=length-1; i>=0;i--)
//       {
//         if(s[i]=='1')
//         {
//            res=res+p;
          
//         }
//          p=p*2;
        
//       }
//       cout<<res<<endl;

// }


#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;



int main()
{
int x=2;
string s="";
while(x>0)
{
    if(x%2==1)
    {
       s+='1';
       x=x/2;
    }
    else{
    s+='0';
    x=x/2;
    } 
    
}
reverse(s.begin(),s.end());
cout<<s<<endl;
}