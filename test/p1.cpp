#include<bits/stdc++.h>
using namespace  std;

void solve(int *arr,int l,int r)
{
    while(l!=r)
    {
        int temp=abs(arr[l]-arr[r]);
        arr[l]-=temp;
        arr[r]-=temp;
        
        if(arr[l]==0)
            l++;
        else if(arr[r]==0)
            r--;
    }
    if(arr[l]==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

int main()
{
    int t_case;
    cin>>t_case;
    while (t_case--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            solve(arr,0,sizeof(arr)/sizeof(arr[0])-1);
        }
    }
    
}