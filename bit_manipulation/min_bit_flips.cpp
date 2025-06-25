#include<iostream>
using namespace std;

int main()
{ 
    int start=10;
    int goal=7;
    int answer=start^goal;
    int count=0;
    while(answer!=0)
    {
        answer=answer&(answer-1);
        count++;

    }
    cout<<count<<endl;

   
}
// for efficient time comp:o(log(n))
// use remainder method; which is go on dividing by two to get a one as a remainder and then count++.