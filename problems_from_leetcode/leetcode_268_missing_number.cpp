#include <bits/stdc++.h>
using namespace std;

int missingNumber_(vector<int>& nums) {
    int size=nums.size();
    sort(nums.begin(),nums.end());
    int res;
    for( int i=0; i<=size;i++)
    {
        if(i==size)
            return i;
        else if
        (i!=nums[i])
        {
            res=i;
            break;
        }   
    }
    return res;
}
//Alternative sol
int missingNumber(vector<int>& nums) {
    int size=nums.size();
    int res=0;
    int sum=0;
    for( int i=0; i<=size;i++)
    {
        if(i==size)
        {
            sum+=i;
            return sum-res;
        }
        else 
        {
            res+=nums[i];
            sum+=i;
        }  
    }
    return sum-res;
}





int main()
{
}