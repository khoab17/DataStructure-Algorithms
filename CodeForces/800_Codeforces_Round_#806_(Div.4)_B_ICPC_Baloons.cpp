#include<bits/stdc++.h>
using namespace std;

int solve(string s,int n)
{
    int arr[256]={0};
    int res=0;
    for(int i=0; i<n; i++)
    {
        arr[s[i]]=arr[s[i]]+1;
    }
    

    for(int i=65; i<=90; i++)
    {
        if(arr[i]>0)
            res=res+ (arr[i]+1);
    }
    return res;
}

int main()
{
    int t_case;
    cin>>t_case;
    for(int i=0; i<t_case; i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<solve(s,n)<<endl;
    }
}