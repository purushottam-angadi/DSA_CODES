
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;



int main()
{
int N=13;
int i=1;
if((N>>i) & 1 ==1)     // also N &(1<<i)
cout<<"True"<<endl;
else cout<<"False"<<endl;
}
