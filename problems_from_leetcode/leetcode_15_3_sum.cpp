#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int size=nums.size();

        if(size<3)
            return {};
        
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0; i<size-2; i++)
        {
            int start = i+1;
            int end =size-1;
            while(start< end)
            {
                
                int sum=nums[i]+nums[start]+nums[end];
                if(sum>0)
                {
                    end--;
                }
                else if(sum<0)
                {
                    start++;
                }
                else
                {
                    
                    vector<int> vec;
                    vec.push_back(nums[i]);
                    vec.push_back(nums[start]);
                    vec.push_back(nums[end]);
                    ans.push_back(vec);
                    start++;
                }
            }
            if(ans.size()==1)
                break;
        }

        return ans;
    }
};

int main()
{
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(0);
    // nums.push_back(-1);
    // nums.push_back(4);
    // nums.push_back();
    // nums.push_back();
    Solution s;
    vector<vector<int>> res=s.threeSum(nums);
    for(vector<int> vec:res)
    {
        for(int j: vec)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

}