#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int tt;
    cin>>tt;
    while (tt--)
    {
        int n;
        string s; 
        cin>>n>>s;

        ll ans=0;
        vector<ll> v;
        for(int i=0; i<n; i++) {
            if(s[i]=='L'){
                ans+=i;
                v.emplace_back(n-1-i-i);
            }
            else{
                ans+=(n-1)-i;
                v.emplace_back( i-(n-1-i) );
            }
        }
        sort(v.rbegin(),v.rend());
        for(int i=0; i<n; i++){
            ans=max(ans,ans+v[i]);
            cout<<ans<<" ";
        }
        cout<<"\n";
    }
    
}