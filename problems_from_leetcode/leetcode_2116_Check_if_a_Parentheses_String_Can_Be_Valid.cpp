#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
//this solution wont work because of inner parenthesis
    bool canBeValid(string s, string locked) {

        int size=locked.length();

        if(s.size()%2 !=0 )
            return false;
        if(locked[size-1]==1 && s[size-1]=='(')
            return false;
        
        for(int i=0; i<size-1; i++)
        {
            if(locked[i]=='1')
            {
                if(i%2==0)
                {
                    if(locked[i+1]=='1' && (s[i]!='(' && s[i+1]!=')') )
                        return false;
                }
                else
                {
                     if(locked[i-1]=='1' && (s[i-1]!='(' && s[i]!=')') )
                        return false;
                }
            }
        }
        return true;
    }
};


int main()
{
    string s="))()))";
    string s2="010100";
    Solution c;
    bool ans=c.canBeValid(s,s2);
    cout<<ans<<endl;
}