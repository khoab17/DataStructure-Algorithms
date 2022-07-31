#include<iostream>
#include<vector>
#include<map>
using namespace std;


// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {

//         vector<int> ans;
//         for(int i=0; i<nums.size()-1; i++)
//         {
//             for(int j=i+1; j< nums.size(); j++)
//             {
//                 if(nums[i]+nums[j]==target)
//                 {
//                     ans.push_back(i);
//                     ans.push_back(j);
//                     return ans;
//                 }
//             }
//         }
//         return ans;
//     }
// };

//optimal solution using hashmap
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { 
       map<int,int> d;
       for(int i=0; i<nums.size(); i++)
       {    
            int diff=target-nums[i];
            if(d.count(diff))
            {
                return {d[diff],i};
            }
            else 
            {
                d[nums[i]]=i;
            }
       }
       return {};
    }
};





int main()
{
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(4);

    Solution s;
    vector<int> ans=s.twoSum(nums,6);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }

}