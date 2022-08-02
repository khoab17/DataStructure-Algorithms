#include<bits/stdc++.h>
using namespace std;

int solve(const vector<int> &nums)
{
    unordered_set<int> seen;
    int count=0;
    int size=nums.size();
    for(int i=size-1; i>=0; i--)
    {
        if(seen.find(nums[i]) != seen.end())
            break;
        else 
            count++;
        seen.insert(nums[i]);
    }
    return size-count;
}


int main()
{
    int t_case;
    cin>>t_case;

    for(int i=0; i<t_case; i++)
    {
        int n;
        cin>>n;

        vector<int> nums;
        for(int j=0; j<n; j++)
        {
            int t;
            cin>>t;
            nums.push_back(t);
        }

        cout<<"Answer"<<solve(nums)<<"\n";
    }
}