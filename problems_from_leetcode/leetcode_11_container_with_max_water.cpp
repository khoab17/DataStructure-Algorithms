#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;

        int res=0;

        while (l<r)
        {
            res=max( res, min(height[l],height[r]) * (r-l));

            if(height[l]<height[r])
            {
                l++;
            }
            else 
                r--;
        }
        return res;
    }
};

int main()
{
    vector <int> height;
    // height.push_back(1);
    // height.push_back(1);
    height.push_back(3);
    height.push_back(9);
    height.push_back(3);
    height.push_back(4);
    height.push_back(7);
    height.push_back(2);
    height.push_back(12);
    height.push_back(6);

    Solution s;
    cout<< s.maxArea(height);
}