#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


bool cookie(vector<int> &arr)
{ 
    int five=0, ten=0;
    for(int i=0; i<arr.size() ; i++)
    {
        if(arr[i]==5)
        {
            five++;
        }
        else if(arr[i]==10)
        {
            if(five)
            {
                five--;
                ten++;
            }
            else return false;
        }
        else 
        { if(five&&ten)
            {
                ten--;
                five--;
            }
            else if( five>=3)
            {
                five=five-3;
            }
            else return false;

        }
    }
    return true;
    
}

int main()
{
    vector<int> arr={10,5,5,10,20} ;
  
    int answer= cookie(arr);
    cout<<answer<<endl;


}