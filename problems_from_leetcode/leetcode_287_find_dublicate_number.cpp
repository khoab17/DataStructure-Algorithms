#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Solving using binary search approach
    // int findDuplicate(vector<int>& nums) {
    //     int low = 1, high = nums.size() - 1, cnt;
        
    //     while(low <=  high)
    //     {
    //         int mid = low + (high - low) / 2;
    //         cnt = 0;
    //         for(int n : nums)
    //         {
    //             if(n <= mid)
    //                 ++cnt;
    //         }

    //         if(cnt <= mid)
    //             low = mid + 1;
    //         else
    //             high = mid - 1;
            
    //     }
    //     return low;
    // }

    //solving using floyed's algorithm
    int findDuplicate(vector<int>& nums) {
        int slow=0,s_slow=0,fast=0;
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow != fast);

        while(s_slow != slow)
        {
            slow=nums[slow];
            s_slow=nums[s_slow];
        }
        return slow;
    }

};  

int main()
{

}