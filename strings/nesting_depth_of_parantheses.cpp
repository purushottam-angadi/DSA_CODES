//Maximum nesting depth of paranthesis 
#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;



class answer{
    public:
    int depth(string s)
   {
       int result=0, current=0;
       for(char c: s)
       { 
        if(c=='(')
        {
            current++;
            result=max(current,result);
        }
        
        if(c==')')
        {
          current --;
        }

       }
       return result;
   }
    };

int main()
{
   answer a;
   string s={"(1+(2*3)+((8)/4))+1"};
   cout<<a.depth(s)<<endl;
}


