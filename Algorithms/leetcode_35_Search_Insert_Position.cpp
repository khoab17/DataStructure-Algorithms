#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        int mid=-1;
        while(left <= right)
        {
            mid=right-left/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                right=mid-1;
            }
            else if(nums[mid] < target)
            {
                left=mid+1;
            }
        }
        if(nums[mid] < target)
        {   
            return mid+1;
        }
        else
         return mid;

    }
};

int main()
{
    Solution s;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(6);
    cout<<s.searchInsert(nums,2);
}