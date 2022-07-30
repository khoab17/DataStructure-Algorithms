#include<bits/stdc++.h>
using namespace std;


int solve(int *arr)
{
    int count=0;
    for(int i=1; i< 4; i++)
    {
        if(arr[0]< arr[i])
            count++;
    }
    return count;
}


int main()
{
    int t_case;
    cin>>t_case;
    for(int i=0; i< t_case; i++)
    {
        int arr[4];
        for(int j=0; j<4; j++)
            cin>>arr[j];
        cout<<solve(arr)<<endl;
    }
}