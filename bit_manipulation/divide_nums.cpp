#include<iostream>
using namespace std;
#include <bits/stdc++.h>

int divide()
{   
    long ndividend=22;
    long ndivisor=3;
    
  bool sign=true;
    if(ndivisor<0 && ndividend>0) sign=false;
    else if (ndivisor>0 && ndividend<0) sign=false;
   
    
    long  dividend = abs(ndividend);
    long  divisor = abs(ndivisor);
    if(dividend==divisor)
    {
        return 1;
    }
    

    long ans=0;
    while(dividend>=divisor)
    {  int count=0;
        while(dividend>=(divisor<<(count+1)))
        {
            count++;
        }
       ans+= 1<<count;
       dividend-=(divisor<<count);
    }
    
    if(ans==(1<<31) && sign==true)
    {
        return INT_MAX;
    }
    if(ans==(1<<31) && sign==false)
    {
        return INT_MIN;
    }

    return sign? ans : -ans;
}

int main()
{
    int answer=divide();
    cout<<answer<<endl;
}

// #include <iostream>
// #include <climits>
// using namespace std;

// int divide(int ndividend, int ndivisor) {
//     // Handle overflow case
//     if (ndividend == INT_MIN && ndivisor == -1) return INT_MAX;

//     // Determine sign
//     bool negative = (ndividend < 0) ^ (ndivisor < 0);

//     // Convert to absolute values for safe manipulation
//     long long dividend = abs((long long)ndividend);
//     long long divisor = abs((long long)ndivisor);
//     long long result = 0;

//     while (dividend >= divisor) {
//         long long temp = divisor, count = 1;
//         while (dividend >= (temp << 1)) {
//             temp <<= 1;
//             count <<= 1;
//         }
//         dividend -= temp;
//         result += count;
//     }

//     return negative ? -result : result;
// }

// int main() {
//     int dividend = 22, divisor = 3;
//     cout << divide(dividend, divisor) << endl;
// }