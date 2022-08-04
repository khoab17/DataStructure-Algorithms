#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {

        string ans;
        for(int i=0; i<s.length(); i++)
        {
            if(isalnum(s[i]))
            {
                ans.push_back(tolower(s[i]));
            }
        }
        s=ans;
        reverse(ans.begin(),ans.end());
        return s==ans;
    }
};

int main()
{   
    Solution s;
    string str = "A man, a plan, a canal: Panama";
    cout<<s.isPalindrome(str);
}   