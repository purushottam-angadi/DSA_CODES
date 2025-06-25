// USING LINEAR SEARCH
// #include <bits/stdc++.h>
// using namespace std;

// long long func(int b, int exp) {
//     long long  ans = 1;
//     long long base = b;
//     while (exp > 0) {
//       ans=ans*base;
//       exp--;
//     }
//     return ans;
// }

// int NthRoot(int n, int m) {

//     for (int i = 1; i <= m; i++) {
//         long long val = func(i, n);
//         if (val == m * 1ll) return i;
//         else if (val > m * 1ll) break;
//     }
//     return -1;
// }

// int main()
// {
//     int n = 4, m = 256;
//     int ans = NthRoot(n, m);
//     cout << "The answer is: " << ans << "\n";
//     return 0;
// }

#include <iostream>
using namespace std;

int func(int mid, int n, int m)
{
    int ans = 1;
    while (n > 0)
    {
        ans = ans * mid;
        n--;
    }
    if (ans == m)
        return 0;
    else if (ans > m)
        return 2;
    else
        return 1;
}

int Nthroot(int n, int m)
{
    int low = 1, high = m;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int answer = func(mid, n, m);
        if (answer == 0)
            return mid;
        else if (answer == 2)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return -1;
}
int main()
{
    int n = 2, m = 4;
    int ans = Nthroot(n, m);
    cout<<ans<<endl;
}
