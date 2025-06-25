#include<iostream>
#include<bits/stdc++.h>
using namespace std;

double anspow(double x, long long n)
{
    if(n==0) return 1.0;

    double half=anspow(x,n/2);
    if(n%2==0) return half*half;
    else return x*half*half;

}
double pow(double x, int n)
{
    long long nn=n;
    if(nn<0)
    { 
        nn=-nn;
        return 1.0/ anspow(x,nn);
    }

    return anspow(x,nn);
    
}

// int main()
// {
//    cout<<pow(2,10)<<endl;
// }



// #include<bits/stdc++.h>

// using namespace std;
// double myPow(double x, int n) {
//   double ans = 1.0;
//   long long nn = n;
//   if (nn < 0) nn = -1 * nn;
//   while (nn) {
//     if (nn % 2) {
//       ans = ans * x;
//       nn = nn - 1;
//     } else {
//       x = x * x;
//       nn = nn / 2;
//     }
//   }
//   if (n < 0) ans = (double)(1.0) / (double)(ans);
//   return ans;
// }

// int main() {
//   cout << myPow(2, 10) << endl;
// }




// double power(double x, int n) {
//     double result = 1;
//     while (n > 0) {
//         if (n % 2 == 1)
//             result *= x;
//         x *= x;
//         n /= 2;
//     }
//     return result;
// }




//     void push(int x)
//     {
//        while(s1.size())
//        {
//         s2.push(s1.top());
//         s1.pop();
//        }
//        s1.push(x);
//        while(s2.size())
//        {
//         s1.push(s2.top());
//         s2.pop();
//        }
//     }
//     void pop()
//     {   
//         s1.pop();
//     }
//     int Top(){

//       return s1.top();
//     }
//     int Size(){
//         return s1.size();
//     }
// };