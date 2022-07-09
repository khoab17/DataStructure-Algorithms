#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int res=0;
        if(s[0]=='-')
        {
            res=res*-1;
        }
        for(int i=0; i<s.length(); i++)
        {
            int temp=(int)s[i]-48;
            if(temp>=0 || temp<=9)
            {
                 res=(res*10)+temp;
            }
            else return 0;
        }

        return res;
    }
};


 int main()
 {
    string str="123";
    Solution s;
    cout<<s.myAtoi(str)<<endl;
 }