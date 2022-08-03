#include<bits/stdc++.h>
using namespace std;

int solve(int n,int k, int *arr)
{
    if(k==1)
        return (n-1)/2;
    else{
        int count=0;
        for(int i=1; i<n-1; i++){
            if(arr[i]> (arr[i-1]+arr[i+1]))
                count++;
        }
        return count;
    }
    
}

int main()
{
    int t_case;
    cin>>t_case;

    while(t_case--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0; i < n; i++)
        {
            cin>>arr[i];
        }
        cout<<solve(n,k,arr)<<"\n";
    }
}