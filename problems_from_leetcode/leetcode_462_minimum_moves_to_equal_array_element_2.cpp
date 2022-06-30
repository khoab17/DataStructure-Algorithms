#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int median=n/2;
        int moves=0;
        for(int i=0; i<n; i++)
        {
            moves+=abs(nums[i]-nums[median]);
        }
        return moves;
    }
};

int main()
{
    Solution s;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(2);
    //nums.push_back(9);
    cout<<s.minMoves2(nums);
}