// // #include<iostream>
// // #include <vector>
// // using namespace std;

// // int main()
// // {   vector<int> arr={1,1,2,2,3,4,4};
// //     int XOR=0;
// //     for(int i=0;i<arr.size();i++)
// //     {
// //          XOR= XOR^arr[i];
// //     }
// //     cout<<XOR<<endl;

// // }

// // using hashing
// #include<iostream>
// #include <vector>
// #include <unordered_map>

// using namespace std;

// int main()
// {   vector<int> arr={1,1,2,2,3,4,4};
//     unordered_map<int,int> mpp;

//     for(int i=0; i<arr.size(); i++)
//     {
//       mpp[arr[i]]+=1;
//     }

//     for(auto &pair :mpp)
//     {
//          if(pair.second %2!=0)
//          {
//             cout<<pair.first<<endl;
//          }
//     }
// }

//2 numbers appearing odd number of times

#include<iostream>
#include <vector>
using namespace std;

int main()
{   vector<int> arr={1,1,2,2,3,5,4,4};
   long XOR=0;        //considering -2^31 and 2^31-1
   for (int i=0; i<arr.size();i++)
   {
   XOR=XOR^arr[i];
   }
   int rightmost = (XOR &(XOR-1))^XOR ;

   int b1=0,b2=0;
   for(int i=0;i<arr.size();i++)
   {
    if(arr[i]&rightmost)
    {
      b1=b1^(arr[i]);
    }
    else
    {
      b2=b2^(arr[i]);
    }
   }
   cout<<b1<<" "<<b2<<endl;
  
}