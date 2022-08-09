#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int i=0,j=0;
        int ans=0;
        while(i<g.size() && j < s.size())
        {
            cout<<g[i]<<" :"<<s[j]<<endl;
            if( g[i] <= s[j] )
            {
                i++;
                j++;
                ans++;
            }
            else
                j++;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> g={1,2};
    vector<int> ss={1,2,3};
    cout<<s.findContentChildren(g,ss);

}