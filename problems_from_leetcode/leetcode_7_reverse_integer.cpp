#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int reverse(int x) {
        long long limit_up=pow(2,31)-1;
        long long limit_lo=pow(2,31)*-1;

        int rem=0;
        long long reverse=0;
        int temp=abs(x);
        while(temp >0)
        {
            rem=temp%10;
            reverse=reverse*10+rem;
            temp/=10;
            if(reverse < limit_lo || reverse > limit_up)
                return 0;
        }
        if(x<0) reverse=-reverse;
        return reverse;
    }
};


int main()
{
    Solution s;
    int n=s.reverse(-1278683);
    cout<<n;
}