#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
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
        }
        return curr;
    }
};

int main()
{

}