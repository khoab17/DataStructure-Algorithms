#include<bits/stdc++.h>
using namespace std;

void solve(int *arr,int n)
{
    for(int i=1; i<n; i++)
    {
        int temp=0;
        if(arr[i]%arr[0] != 0 )
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}


int main()
{
    int cases;
    cin>>cases;
    for(int i=0; i<cases; i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        solve(arr,sizeof(arr)/sizeof(arr[0]));
    }
}