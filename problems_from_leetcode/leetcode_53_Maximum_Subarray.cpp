#include <bits/stdc++.h>
using namespace std;


//using kadane's algorithm 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        int maxSum=nums[0];
        for(int i=1; i< n; i++){
            nums[i]=max(nums[i]+nums[i-1], nums[i]);
            maxSum=max(maxSum,nums[i]);
        }
        return maxSum;
    }
};


int main(){

}