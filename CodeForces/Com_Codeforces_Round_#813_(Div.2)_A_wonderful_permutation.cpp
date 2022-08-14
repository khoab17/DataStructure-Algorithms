#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t_case;
    cin>> t_case;

    int n,k;
    while (t_case--)
    {
        cin>>n>>k;
        vector<int> vec(n);
        for(int i=0; i<n; i++)
            cin>>vec[i];
        
        int ans=0;
        for(int i=0; i<k; i++)
        {
            if(vec[i] > k)
                ans++;
        }
        cout<<ans<<"\n";
    }
    
}