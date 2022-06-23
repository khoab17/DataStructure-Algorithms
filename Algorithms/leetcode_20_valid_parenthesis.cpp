#include <bits/stdc++.h>
using namespace std;

class Solution {
public:    
    stack<char> stack;
    bool match(char s)
    {
        if(stack.empty())
            return false;
        if((stack.top()=='[' && s==']') || (stack.top()=='{' && s=='}') || (stack.top()=='(' && s==')') )
        {
            stack.pop();
            return true;
        }
        else    return false;
    }

    bool isValid(string s) {
        bool flag=true;
        for(int i=0; i< s.size(); i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                stack.push(s[i]);
            }
            else{
                flag=match(s[i]);
                if(!flag)
                break;
            }
        }
        return flag && stack.empty();
    }
};
int main()
{
    Solution s;
    string str="(())";
    cout<<s.isValid(str);
}