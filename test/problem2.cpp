#include<bits/stdc++.h>
using namespace std;

void solve(int n, int k)
{
    vector<vector<int>> r;
    vector<vector<int>> rr;

    unordered_set<int> seen;
    for(int i=1; i<n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if( ((i+k)*j)%4==0 && (!seen.count(i) && !seen.count(j)) )
            {
                r.push_back({i,j});
                seen.insert(i);
                seen.insert(j);
            }
            if( ((j+k)*i)%4==0 && (!seen.count(i) && !seen.count(j)) )
            {
                rr.push_back({j,i});
                seen.insert(i);
                seen.insert(j);
            }
               
        }
    }

    if(r.empty() && rr.empty())
        cout<<"NO\n";
    else {
        cout<<"Yes\n";
        for(auto i: r)
        {
            cout<<i[0]<<" "<<i[1]<<"\n";
        }
        for(auto i: rr)
        {
            cout<<i[0]<<" "<<i[1]<<"\n";
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


    int n,k;
    while(t_Case--)
    {
       cin>>n>>k;
       solve(n,k);
    }
 }