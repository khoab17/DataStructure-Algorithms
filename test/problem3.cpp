#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(vector<int> & par, int n,int q,vector<vector<ll>> &qq)
{
    for(int i=0; i<q; i++)
    {
        int pos=qq[i][0];
        int rnd=qq[i][1];

        int max=par[0];
        unordered_map<int,int> res;

        for(int j=1; j<n; j++)
        {
            if(par[j] > max )
            {
                max=par[j];
                ++res[max];
            }
            else
            {
                ++res[max];
            }

            if( j== rnd ) {
                cout<<res[par[pos-1]]<<"\n";
                break;
            }
        }
        if( rnd >= n)
        {
            if(max== par[pos-1])
                cout<<rnd - (n-1) + res[max] <<"\n";
            else
                cout<<res[par[pos-1]]<<"\n"; 
        } 
    }    
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t_Case;
    cin>>t_Case;

    int n,q;
    while(t_Case--)
    {
        cin>>n>>q;
        vector<int> par(n);
        for(int i=0; i<n;i++)
        cin>>par[i];
        ll a,b;
        vector<vector<ll>> qq;
        for(int i=0; i<q; i++)
        {
            cin>>a>>b;
            qq.push_back({a,b});
        }
        solve(par,n,q,qq);
    }
 }