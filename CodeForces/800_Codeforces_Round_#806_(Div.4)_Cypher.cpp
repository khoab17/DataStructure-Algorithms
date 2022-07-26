#include<bits/stdc++.h>
using namespace std;


vector<int> solve(vector<int>& nums, vector<string> &moves)
{
    for(int i=0; i<nums.size(); i++)
    {
        for(int j=0; j<moves[i].size(); j++ )
        {
            if(moves[i][j]=='D')
            {
                nums[i]=(nums[i]+1)%10;
            }
            else{
                nums[i]=(nums[i]+9)%10;
            }
        }
    }    
    return nums;
}

int main()
{
    int t_case;
    cin>>t_case;
    for(int i=0; i<t_case; i++)
    {
        int n;
        cin>>n;
        vector<string> moves;
        vector<int> nums;

        int in;
        for(int i=0; i<n; i++)
        {
            cin>>in;
            nums.push_back(in);
        }
        string s;
        for(int i=0; i<n; i++)
        {
            int c;
            cin>>c;
            cin>>s;
            moves.push_back(s);
        }
        vector<int> res=solve(nums,moves);
        for(int i:res)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}