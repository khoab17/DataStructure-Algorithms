#include <bits/stdc++.h>
using namespace std;


// vector<int> solve(const vector<int> & nums)
// {
//     vector<int> newNums=nums;
//     sort(newNums.begin(),newNums.end());
//     return newNums;
// }

int climbStairs(int n) {
    if(n<=3)
        return n;
    int prev=2;
    int curr=3;
    int sum=3;
    while( sum!=n )
    {
        int temp=curr+prev;
        prev=curr;
        curr=temp;
        sum++;
        cout<<curr<<endl;
    }
    return curr;
}

int main() {
	// your code goes here

    // int t_case;
    // cin>>t_case;

    // for(int i=0; i<t_case; i++)
    // {
    //     int n;
    //     cin>>n;

    //     string s;
    //     getline(cin,s);
    // }

    cout<<climbStairs(4)<<endl;

    // vector<int> nums={1,2,3,4,9,7,6,5,2,1};
	// nums=solve(nums);
    // vector<int> ::iterator i;
    // for( i=nums.begin(); i<nums.end();  i++ )
    // {
    //     cout<<*i<<" ";
    // }
	return 0;
}