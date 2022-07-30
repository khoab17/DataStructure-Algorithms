#include<bits/stdc++.h>
using namespace std;

int solve(int *arr, int n)
{
    int count_odd =0;
    int count_even=0;
    for(int i=0; i< n; i++)
    {
        if(arr[i]%2 !=1 )
            count_odd++;
        else 
            count_even++;
    }    
    if(count_even > count_odd)
        return count_odd;
    else return count_even;
}

int main()
{
    int t_case;
    cin>>t_case;

    for(int i=0; i< t_case; i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0; j<n; j++)
            cin>>arr[j];
        cout<<solve(arr,n)<<endl;
    }
}