#include<bits/stdc++.h>
using namespace std;

void solve(int n)
{
    vector<int> ans;

    for(int i=9; i>=0; i--)
    {
        if(n==0)
            break;
        else if(i<=n)
        {
            n-=i;
            ans.push_back(i);
        }
    }
    int size=ans.size();
    for(int i=size-1; i>=0; i--)
    {
        cout<<ans[i];
    }
    cout<<"\n";
}


int main()
{
    int t_case;
    cin>>t_case;

    for(int i=0; i<t_case; i++)
    {
        int n;
        cin>>n;
        solve(n);
    }
}