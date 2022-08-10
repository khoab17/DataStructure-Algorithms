#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int ,int> res;

        for(int i=0; i< nums2.size(); i++)
        {
            while( !st.empty() && st.top() < nums2[i] )
            {
                res[st.top()]=nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        while (!st.empty())
        {       
            res[st.top()]=-1;
            st.pop();
        }
        
        for(int i=0; i<nums1.size(); i++)
        {
            nums1[i]=res[nums1[i]];
        }
        return nums1;
    }
};

int main()
{
    vector<int> num1={4,1,2};
    vector<int> num2={1,3,4,2};

    Solution s;
    vector<int> res=s.nextGreaterElement(num1,num2);
    for(int i: res)
    {
        cout<<i<<" ";
    }
}