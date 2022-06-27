#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void shift_arr(vector<int>& nums,int index)
    {
        for(int i=nums.size()-1; i>index; i--)
        {
            nums[i]=nums[i-1];
        }
    } 

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n<1) return;

        int index=0;
        for(int i=nums1.size()-n ; i<nums1.size(); i++ )
        {
            nums1[i]=nums2[index];
            index++;
        }
        sort(nums1.begin(),nums1.end());
    }
};

int main(){
    vector<int> nums1;
    vector<int> nums2;
    

    nums1.push_back(-1);
    nums1.push_back(0);
    nums1.push_back(0);
    nums1.push_back(3);
    nums1.push_back(3);
    nums1.push_back(3);
    nums1.push_back(0);
    nums1.push_back(0);
    nums1.push_back(0);

    nums2.push_back(1);
    nums2.push_back(2);
    nums2.push_back(2);

    Solution s;
    s.merge(nums1,6,nums2,3);

    for(int i:nums1)
    {
        cout<<i<<" ";
    }
   
}