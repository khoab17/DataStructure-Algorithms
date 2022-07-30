#include<bits/stdc++.h>
#include <map>;
using namespace std;

class Solution {
public:
    int squarsOfDigits(int n)
    {
        int sum=0;
        while(n > 0)
        {
            sum+=pow((n%10),2);
            n/=10;
        }   
        return sum;
    }

    bool isHappy(int n) {
        unordered_map<int,bool> seen;
        while(n!=1 && seen.count(n)==0)
        {
            seen.emplace(n,true);
            n=squarsOfDigits(n);
        }
        return n==1;
    }
};

int main()
{
    Solution s;
    cout<<s.isHappy(19);
}