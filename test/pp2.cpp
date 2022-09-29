#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr,int n){
        
}

long long fibonacci(int n){
    if(n<2) return n;
    return fibonacci(n-1)+fibonacci(n-2);
}

long long fact(int n){
    if(n<2) return 1;
    return n*fact(n-1);
}

int main()
{
    cout<<fibonacci(0)<<"\n";
    cout<<fact(10);
    // int t_case;
    // cin>>t_case;

    // while (t_case--)
    // {
    //     int n;
    //     cin>>n;
    //     vector<int> arr(n);
    //     for(int i=0; i<n; i++)
    //         cin>>arr[i];
        
    //     solve(arr,n);
    // }
    
}