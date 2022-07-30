#include <bits/stdc++.h>
using namespace std;

void solve(int *arr, int n,int key){
        int opened_doors=1;

        int count=0;
        while(arr[key-1]>0 && count<3)
        {
            opened_doors+=1;
            key=arr[key-1];
            count++;
        }
        if(opened_doors==3)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
}

int_fast32_t main()
{
    int t_case;
    cin>>t_case;

    for(int i=0; i<t_case; i++)
    {
        int key;
        cin>>key;

        int arr[3];
        for(int j=0; j<3; j++){
            cin>>arr[j];
        }
        solve(arr,3,key);
    }
}