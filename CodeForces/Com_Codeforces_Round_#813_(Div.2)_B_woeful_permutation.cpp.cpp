#include<bits/stdc++.h>
using namespace std;

void solve(int n)
{
    vector<int> ans(n);

    if(n%2==0)
    {
        for(int i=n-1; i>=0; i--)
        {
            if(i%2==0)
                ans[i]=i+2;
            else 
                ans[i]=i;
        }
    }
    else {
        ans[0]=1;
        for(int i=n-1; i>0; i--)
        {
            if(i%2==0)
                ans[i]=i;
            else 
                ans[i]=i+2;
        }
    }
    for(int i: ans)
        cout<<i<<" ";
    cout<<"\n";
}


int main()
{
    int t_case;
    cin>>t_case;

    int n;
    while (t_case--)
    {
        cin>>n;
        solve(n);
    }
    
}