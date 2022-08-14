#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr,int n)
{
    int size=arr.size();
    unordered_set<int> seen;

    int ans=0;
    while(1)
    {
        bool f=true;
        for(int i=size-1; i>0; i--)
        {
            if(arr[i-1] > arr[i])
            {
                while(i>0)
                {
                    if(!seen.count(arr[i-1]) && arr[i-1]!=0)
                        ans++;
                    seen.insert(arr[i-1]);
                    i--;
                }
                f=false;
            }
        }
        for(int i=0; i<size; i++)
        {
            if(seen.count(arr[i]))
                arr[i]=0;
        }
        if(f)
            break;
    }
    cout<<ans<<"\n";
}


int main()
{
    int t_case;
    cin>>t_case;

    int n;
    while(t_case--)
    {
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        solve(arr,n);
    }
}