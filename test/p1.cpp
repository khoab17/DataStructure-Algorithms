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

void bubble(int *arr, int n){
    bool flag=true;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]> arr[j])
            {
                swap(arr[i],arr[j]);
                flag=false;
            }
        }
        if(flag) break;
    }
}
void print (int *arr,int n){
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={9,5,3,1,6,3};
    bubble(arr,sizeof(arr)/sizeof(arr[0]));
    print(arr,sizeof(arr)/sizeof(arr[0]));
    // int t_case;
    // cin>>t_case;
    // while (t_case--)
    // {
    //     int n;
    //     cin>>n;
    //     int arr[n];
    //     for(int i=0; i<n; i++)
    //     {
    //         cin>>arr[i];
    //         solve(arr,0,sizeof(arr)/sizeof(arr[0])-1);
    //     }
    // }
    
}