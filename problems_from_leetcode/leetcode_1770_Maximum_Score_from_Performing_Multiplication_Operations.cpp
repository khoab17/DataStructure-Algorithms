#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int size=nums.size()-multipliers.size();
        int m=multipliers.size();
        int sum=INT_MIN;
        for(int i=0; i<size; i++){
            int temp=0;
            for(int j=0; j<m; j++){
                temp+=nums[i+j]*multipliers[j];
                cout<<nums[i+j]<<":"<<multipliers[j]<<"  sum:"<<temp<<endl;
            }
           // cout<<temp<<endl;
            sum=max(temp,sum);
        }
        return sum;
    }
};


int main(){

    vector<int> nums={-5,-3,-3,-2,7,1};
    vector<int> multipliers={-10,-5,3,4,6};
    Solution s;
    cout<<s.maximumScore(nums,multipliers);

}