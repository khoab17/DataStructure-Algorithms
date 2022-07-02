#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        int max_h;
        int max_v;
        if(horizontalCuts.size())
            max_h=horizontalCuts[0];
        if(verticalCuts.size())
            max_v=verticalCuts[0];

        for(int i=0; i<horizontalCuts.size()-1;i++)
        {
            if(horizontalCuts[i+1]-horizontalCuts[i]>max_h)
            {
                max_h=horizontalCuts[i+1]-horizontalCuts[i];
            }
        }
        if(h-horizontalCuts[horizontalCuts.size()-1]>max_h)
        {
            max_h=h-horizontalCuts[horizontalCuts.size()-1];
        }

        for(int i=0; i<verticalCuts.size()-1; i++)
        {
            if(verticalCuts[i+1]-verticalCuts[i] > max_v)
            {
                max_v=verticalCuts[i+1]-verticalCuts[i] ;
            }
        }
        if(w-verticalCuts[verticalCuts.size()-1]>max_v)
        {
            max_v=w-verticalCuts[verticalCuts.size()-1];
        }

        return ((long long)max_h*max_v)%1000000007;
    }
};

int main()
{
    int h=1000000000;
    int w=1000000000;
    vector<int> hor;
    hor.push_back(2);
    // hor.push_back(2);
    // hor.push_back(4);
    vector<int> ver;
    //ver.push_back(1);
    ver.push_back(2);

    Solution s;
    cout<<"Max area:"<<s.maxArea(h,w,hor,ver)<<endl;
}