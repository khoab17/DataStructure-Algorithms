#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        vector<int> res(nums.size(),-1);
        int size=nums.size();

        for(int i=2*size-1; i>=0; i--)
        {
            while( !st.empty() && st.top() <= nums[i % size]  )
            {
                st.pop();
            }
            if( !st.empty())
                res[i% size]= st.top();
            st.push(nums[i%size]);
        }
        return res;
    }
};

int main()
{
    // Solution s;
    // vector<int> nums={1,2,3,4,3};

    // nums=s.nextGreaterElements(nums);
    // for(int i: nums)
    //     cout<<i<<" ";



}