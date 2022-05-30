#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int size=nums.size();
    for(int i=0;i<size-1;i++)
    {
        if(nums[i]==nums[i+1])
        {
            nums.erase(nums.begin()+(i+1));
            i--;
            size=nums.size();
        }
    }

    return nums.size();
}



int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(12);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(4);

    cout<<removeDuplicates(nums)<<endl;
    for(int i:nums)
    {
        cout<<i<<"  ";
    }
}