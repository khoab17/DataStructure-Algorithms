#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int size=nums.size();
        sort(nums.begin(),nums.end());
        
        int diff=INT_MAX;
        int ans=INT_MAX;
        

        for(int i=0; i<size-2; i++ )
        {
           int start=i+1;
           int end=size-1;

           while(start<end)
           {
                int sum=nums[i]+nums[start]+nums[end];
                if(sum==target)
                    return target;
                
                else if(sum>target)
                {
                    if( abs(sum-target) <diff )
                    {
                        ans=sum;
                        diff=abs(sum-target);
                    }
                    end--;
                }
                else{
                    if( abs(sum-target) < diff )
                    {
                        ans=sum;
                        diff=abs(sum-target);
                    }
                    start++;
                }
           }
        }
        return ans;
    }
};

int main()
{
    vector <int> nums;
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(0);
    Solution s;
    cout<<s.threeSumClosest(nums,1);
}