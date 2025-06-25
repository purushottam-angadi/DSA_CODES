
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;



int main()
{
int a=5, b=6;
a=a^b;
b=a^b;
a=a^b;
cout<<a<<" "<<b<<endl;
}

// you can also solve this using a temp variable