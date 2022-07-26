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


// void solve(int *arr,int n)
// {
//     bool flag=true;
//     for(int i=1; i<n; i++)
//     {
//         int temp=0;
//         int j=i-1;
//         while(temp < arr[i] && j >=0)
//         {
//             if( temp+arr[j] > arr[i])
//             {
//                 j--;
//             }
//             else
//             {
//                 temp+=arr[j];
//             }
//         }
//         if(temp != arr[i])
//         {
//             cout<<"NO"<<endl;
//             flag=false;
//             break;
//         }
//     }
//     if(flag)
//     cout<<"YES"<<endl;
// }


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