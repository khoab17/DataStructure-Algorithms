#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int firstUniqChar(string s) {
        int ans=-1;
        
        unordered_map<char,int> seen;
        
        for(int i=0; i<s.length();i++)
        {
            ++seen[s[i]];
        }
        for(int i=0; i<s.length(); i++)
        {
            if(seen[s[i]]==1)
                return i;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    cout<<s.firstUniqChar("khoabk")<<endl;
}