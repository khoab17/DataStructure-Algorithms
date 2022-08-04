#include<bits/stdc++.h>
using namespace std;

vector<int> solve(const vector<int> & nums)
{
    vector<int> newNums=nums;
    sort(newNums.begin(),newNums.end());
    return newNums;
}


int main()
{
    vector<int> nums={1,2,3,4,9,7,6,5,2,1};
	nums=solve(nums);
    vector<int> ::iterator i;
    for( i=nums.begin(); i<nums.end();  i++ )
    {
        cout<<*i<<" ";
    }

    vector<int> vals={1,2,3,4,5,6,7,8,9};
    vector<int> ::iterator ptr;
    ptr=vals.begin();

    while( ptr!=vals.end())
    
    cout<<*ptr;
}