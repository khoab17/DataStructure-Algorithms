#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// naive solution
void solve(int arr[],int n,int m)
{
    ll max;
    for(int i=0; i<=n-m ;i++)
    {
        max=arr[i];
        for (int j=i+1; j<=i+(m-1) ;j++)
        {
            if(arr[j]>max)
                max=arr[j];
        }
        cout<<max;
    }
}

//optimal solution using queue
void solve_optimal(vector<int> &nums,int m)
{
    deque<int> dq;
    for(int i=0; i < nums.size(); i++)
    {
        if( !dq.empty() && dq.front()==i-m )
            dq.pop_front();
        
        while( !dq.empty() && nums[i] > nums[dq.back()])
            dq.pop_back();

        dq.push_back(i);

        if( i>= m-1 )
            cout<<nums[dq.front()]<<" ";
    }
}


int main()
{
    // int n;
    // cin>>n;
    // int arr[n];
    // for (int i=0;i<n;i++)
    //     cin>>arr[i];
    // int m;
    // cin>>m;
    // solve(arr,n,m);

    vector<int> nums;
    int n;
    cin>>n;
    int input;
    for(int i=0; i<n; i++)
    {
        cin>>input;
        nums.push_back(input);
    }
    int m;
    cin>>m;
    solve_optimal(nums,m);

}