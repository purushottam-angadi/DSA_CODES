#include <iostream>
#include <vector>
using namespace std;
class answer
{
public:
    string reverseorder(string s)
    {    
        s+=" ";
        string temp = "";
        string ans = "";
        for (int i = 0; i <+ s.length(); i++)
        {
            if (s[i] != ' ')
            {
                temp += s[i];
            }
            else if (s[i] == ' ')
            {
                if (ans != "") ans = temp + " " + ans;
                else ans = temp;
                temp = "";
            }
           
        }
        // if (temp!="")
        // {
        //     if(ans!="") ans= temp+" "+ans;
        //     else 
        //     ans=temp;
        // }
              return ans;
    }
  
};

int main()
{
    answer a;
    string s = "Om Sai Ram";
    cout << a.reverseorder(s) << endl;
}