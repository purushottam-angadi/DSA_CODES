#include<iostream>
#include <vector>
using namespace std;
  
 const int intmax=1e5 ;
vector<int> v(intmax+1);
void sieve()
{ 
  
    v[0]=v[1]=0;
    for(int i=2 ; i<intmax;i++)
    {
         v[i]=i;
    }
     for(int i=2 ; i*i<intmax;i++)
    {
        if(v[i]==i)
        {
            for(int j=i*i; j<intmax;j+=i)
            {
                if(v[j]==j)
                {
                    v[j]=i;
                }
            }
        }
    }

}

  int main() {
    sieve();
    vector<int> queries = {36, 42, 30};
    for (int q : queries) {
        while (q != 1) {
            cout << v[q] << " ";
            q = q / v[q];
        }
        cout << endl;
    }
}

  
    


  
