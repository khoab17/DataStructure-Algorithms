#include <bits/stdc++.h>
using namespace std;

vector<string> ans;

void solve(string str,int left, int right)
{
    if(left==right)
        ans.push_back(str);

    for(int i=left; i<=right; i++)
    {
        swap( str[left], str[i] );
        solve(str, left+1, right);
        swap( str[left],str[i]);
    }
    
}

int main()
{
    solve("12345",0,4);

    for(auto i: ans)
        cout<<i<<"\n";
}